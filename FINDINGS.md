# NepCTF 1123 — David Die Binary-2 真机实测结论

环境：GitHub Actions `macos-15`（Apple M1 Virtual / arm64），macOS 15.7.7，Rosetta 2 已装。
仓库：https://github.com/lxc20120105/nepctf-1123-probe

## 1. 程序行为

| 输入 | 输出 |
|---|---|
| 无参数 | `usage: challenge NepCTF{...}` |
| `NepCTF{a986e67dd7e9329e518bdba8805c2d4d}` | `Access Denied` |
| `NepCTF{00000000000000000000000000000000}` | `Access Denied` |

用法是 **argv[1]**，不是 stdin。

## 2. 候选 flag 已被证伪，且原因清楚

session-1123 里 Unicorn 离线重放出的 `a986e67dd7e9329e518bdba8805c2d4d` **是错的**。

根因：session 的 stub 把 `arc4random_buf` 全部置零，而真机下子进程 `out1` 的**前 16 字节是真随机 nonce**，`out2` 依赖它。

```
子进程直接驱动（Rosetta 下可跑，无反调试）：
run0: out1 = 1396544ff9da7adf1ddd684cc72c7c44 | 82e31ffdaed5c11050891f0dc57d4310   out2 = 1a51e72112ab437375c19e1150abdf30
run1: out1 = 97210792478fbf760f69a3fe44d22b23 | 82e31ffdaed5c11050891f0dc57d4310   out2 = f1f1801aedbb8cfe174ef9b514593299
run2: out1 = 4ad8b3f2dfbe357f93991ba1d9445fe3 | 82e31ffdaed5c11050891f0dc57d4310   out2 = d02af90694486c601631afb00edb8528
```

前 16 字节每次不同（随机），**后 16 字节恒定** `82e31ffdaed5c11050891f0dc57d4310` —— 这与 session 的记录完全一致，说明 session 的重放本身是准的，只是输入条件（随机数全零）不成立。

## 3. 完整 IPC 协议（lldb python 回调拦截 write 得到）

```
fd=3  n=31200   写出 x86_64 slice 到 /tmp/.udx_XXXXXX（mkstemp 建的临时文件）
fd=4  n=16      随机 nonce
fd=4  n=29 ×14  [4 字节序号 00..0d][25 字节数据]
fd=4  n=29      结束标记 00000000 ff 00...
posix_spawn     /tmp/.udx_XXXXXX 与 challenge.bin
```

子进程是 x86_64 slice，**不含 ptrace**，可以脱离父进程直接驱动（需 Rosetta）。

## 4. 变换对 flag 是模 256 线性的（差分实验）

同一轮数据（第 1 轮）前 16 字节随 flag 的变化：

| flag | 数据前 16 字节 |
|---|---|
| `NepCTF{0000...00}` | `62 56 ca db 6d 14 8e ab a1 fc 3f 6a 43 35 53 f5` |
| `NepCTF{1000...00}` | `61 56 ca da ...`（字节0 −1、字节3 −1） |
| `NepCTF{0100...00}` | `63 55 ca db ...`（字节0 +1、字节1 −1） |
| `NepCTF{0000...01}` | 与基准完全相同 |

改一个 hex 字符只引起固定几个字节 ±1 的变化 → 变换线性且带扩散。
第 7 轮前 16 字节基本不随 flag 变，仅末位字符 0→1 时索引 16 的字节 `f7 → f4`。

## 5. 一个重要证伪：0x100002358 不是比较点

hook 掉 `ptrace` 后程序能正常跑完并输出 `Access Denied`（exit 1），
但断点 `0x100002358` **命中 0 次**。

session 的静态分析之所以走到那个地址，是因为 `_ptrace` stub 返回 `-1`，
让程序进了反调试的假分支。真实执行路径根本不经过那里。

## 6. 下一步

卡点不在环境，而在**不知道"正确的 data"是哪个值**——变换可逆，但缺对照目标。

两条路：

- **A 静态逆向**：用 Ghidra 看 main（入口 `0x100000a18`）如何把 argv[1] 变换成那 25 字节，
  确定程序用什么做最终判等。拿到判等目标后，配合已观测的线性性质即可反解。
- **B 线性代数攻击**：跑 32 次扰动实验（每个 hex 位 +1）建 16×32 效应矩阵，
  再用 14 轮 × 16 字节 = 224 个方程解模 256 线性方程组。不需要读汇编，
  但必须先知道目标 data 值，且要确认变换真的是线性的（目前只验证了前几轮）。

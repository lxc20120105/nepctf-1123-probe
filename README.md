# NepCTF 1123 — David Die Binary-2 动态验证

用 GitHub Actions 的 `macos-15`（Apple Silicon M1）runner 原生运行题目 fat Mach-O，
验证离线 Unicorn 重放得到的候选 flag。

## 题目结构

- `bin/challenge.bin`：fat Mach-O，两个 slice 都只 link `/usr/lib/libSystem.B.dylib`，minos 15.0
- arm64 父进程：`ptrace` 反调试 → `mkstemp` 写出 x86_64 slice → `posix_spawn` +
  `posix_spawnattr_setbinpref_np(CPU_TYPE_X86_64)` → pipe 双向 IPC
- 即父进程强制要求子进程以 x86_64 形态执行，依赖 Rosetta 2 —— 这正是 M1 runner 的价值
- flag 形制 `NepCTF{32 hex}`，最终比较点在 `0x100002358`

## workflow 步骤

| step | 目的 |
|---|---|
| 1-2 | 环境探测 + 二进制架构/依赖确认 |
| 3 | 确保 Rosetta 2 可用（官方文档未声明预装，显式装） |
| 4 | 去 quarantine + ad-hoc 重签，绕 Gatekeeper |
| 5-7 | 无参试跑 / 候选 flag 以 argv 传入 / 以 stdin 传入 |
| 8-9 | 现场编译 dylib hook 掉 `ptrace`，绕 `PT_DENY_ATTACH` |
| 10 | lldb 断在比较点，dump 参与比较的两个 16 字节 |
| 11 | 上传全部输出为 artifact |

## 说明

仓库为 public，标准 runner 完全免费且不限分钟数；代价是日志与附件公开。

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

targets = [0x100000a20, 0x100000a18]
out = []

fm = currentProgram.getFunctionManager()
dec = DecompInterface()
dec.openProgram(currentProgram)

done = set()
for t in targets:
    addr = toAddr(t)
    func = fm.getFunctionAt(addr)
    if func is None:
        # fall back to containing function
        func = fm.getFunctionContaining(addr)
    if func is None or func.getEntryPoint().getOffset() in done:
        continue
    done.add(func.getEntryPoint().getOffset())
    res = dec.decompileFunction(func, 180, ConsoleTaskMonitor())
    out.append("/* ===== func at 0x%x  name=%s =====" % (
        func.getEntryPoint().getOffset(), func.getName()))
    if res.decompileCompleted():
        out.append(res.getDecompiledFunction().getC())
    else:
        out.append("DECOMPILE FAILED: %s" % res.getErrorMessage())
    out.append("===== end ===== */")

# also dump all non-thunk function entry points for orientation
out.append("/* FUNCTION LIST")
for f in fm.getFunctions(True):
    out.append("0x%x %s size=%d" % (f.getEntryPoint().getOffset(), f.getName(), f.getBody().getNumAddresses()))
out.append("END FUNCTION LIST */")

f = open('/mnt/f/nepctf-1123-probe/main_decomp.c', 'w')
f.write("\n".join(out))
f.close()
println("WROTE %d chars" % len("\n".join(out)))

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class DecompFns extends GhidraScript {

    @Override
    public void run() throws Exception {
        long[] targets = {
            0x100002498L,   // hash update / absorb
            0x10000257cL,   // derive
            0x1000029b4L,   // init
            0x100002c64L    // strncmp thunk region marker
        };
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        Set<Long> done = new HashSet<Long>();

        for (long t : targets) {
            Address addr = toAddr(t);
            Function f = getFunctionAt(addr);
            if (f == null) {
                f = currentProgram.getFunctionManager().getFunctionContaining(addr);
            }
            if (f == null || done.contains(f.getEntryPoint().getOffset())) {
                continue;
            }
            done.add(f.getEntryPoint().getOffset());
            DecompileResults res = dec.decompileFunction(f, 240, new ConsoleTaskMonitor());
            sb.append("/* ===== func 0x")
              .append(Long.toHexString(f.getEntryPoint().getOffset()))
              .append(" name=").append(f.getName()).append(" =====\n");
            if (res.decompileCompleted()) {
                sb.append(res.getDecompiledFunction().getC());
            } else {
                sb.append("DECOMPILE FAILED: ").append(res.getErrorMessage());
            }
            sb.append("\n===== end ===== */\n\n");
        }

        PrintWriter pw = new PrintWriter("/mnt/f/nepctf-1123-probe/helpers_decomp.c");
        pw.print(sb.toString());
        pw.close();
        println("WROTE " + sb.length() + " chars");
    }
}

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class DecompX86 extends GhidraScript {

    @Override
    public void run() throws Exception {
        long[] targets = { 0x1000008c0L };
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

        sb.append("/* FUNCTION LIST\n");
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            sb.append(String.format("0x%x  %s  size=%d%n",
                f.getEntryPoint().getOffset(), f.getName(), f.getBody().getNumAddresses()));
        }
        sb.append("END FUNCTION LIST */\n");

        PrintWriter pw = new PrintWriter("/mnt/f/nepctf-1123-probe/x86_decomp.c");
        pw.print(sb.toString());
        pw.close();
        println("WROTE " + sb.length() + " chars");
    }
}

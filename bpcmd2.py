import lldb
import sys

pending = {}


def _reg(frame, name):
    return frame.FindRegister(name).GetValueAsUnsigned()


def on_read(frame, bp_loc, dict):
    fd = _reg(frame, "x0")
    buf = _reg(frame, "x1")
    n = _reg(frame, "x2")
    if fd <= 2 or n > 64 or n == 0:
        return False
    lr = _reg(frame, "lr")
    target = frame.GetThread().GetProcess().GetTarget()
    bp = target.BreakpointCreateByAddress(lr)
    bp.SetOneShot(True)
    bp.SetScriptCallbackFunction("bpcmd2.on_read_done")
    pending[lr] = (buf, n)
    return False


def on_read_done(frame, bp_loc, dict):
    pc = frame.GetPC()
    info = pending.pop(pc, None)
    if info is None:
        return False
    addr, n = info
    proc = frame.GetThread().GetProcess()
    err = lldb.SBError()
    data = proc.ReadMemory(addr, n, err)
    if err.Fail():
        print("READ n=%d ERR" % n)
    else:
        print("READ n=%d %s" % (n, bytes(data).hex()))
    sys.stdout.flush()
    return False


def on_write(frame, bp_loc, dict):
    fd = _reg(frame, "x0")
    buf = _reg(frame, "x1")
    n = _reg(frame, "x2")
    if fd <= 2 or n > 64 or n == 0:
        return False
    proc = frame.GetThread().GetProcess()
    err = lldb.SBError()
    data = proc.ReadMemory(buf, n, err)
    if err.Fail():
        print("WRITE n=%d ERR" % n)
    else:
        print("WRITE n=%d %s" % (n, bytes(data).hex()))
    sys.stdout.flush()
    return False

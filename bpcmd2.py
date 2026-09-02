import lldb
import sys

pending = []


def _reg(frame, name):
    return frame.FindRegister(name).GetValueAsUnsigned()


def _dump(proc):
    global pending
    while pending:
        addr, n = pending.pop(0)
        err = lldb.SBError()
        data = proc.ReadMemory(addr, n, err)
        if err.Fail():
            print("READ n=%d <unreadable>" % n)
        else:
            print("READ n=%d %s" % (n, bytes(data).hex()))
        sys.stdout.flush()


def on_read(frame, bp_loc, dict):
    fd = _reg(frame, "x0")
    buf = _reg(frame, "x1")
    n = _reg(frame, "x2")
    proc = frame.GetThread().GetProcess()
    if proc is not None:
        _dump(proc)
    if fd > 2 and 0 < n <= 64:
        pending.append((buf, n))
    return False


def on_write(frame, bp_loc, dict):
    fd = _reg(frame, "x0")
    buf = _reg(frame, "x1")
    n = _reg(frame, "x2")
    proc = frame.GetThread().GetProcess()
    if proc is not None:
        _dump(proc)
    if fd > 2 and 0 < n <= 64:
        err = lldb.SBError()
        data = proc.ReadMemory(buf, n, err)
        if err.Fail():
            print("WRITE n=%d <unreadable>" % n)
        else:
            print("WRITE n=%d %s" % (n, bytes(data).hex()))
        sys.stdout.flush()
    return False


def on_stdout(frame, bp_loc, dict):
    """hook write to fd 1/2 so we can flush the last pending reads"""
    proc = frame.GetThread().GetProcess()
    if proc is not None:
        _dump(proc)
    return False

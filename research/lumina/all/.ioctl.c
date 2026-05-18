// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A70
// Name:            .ioctl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A70 jmp     cs:off_23E520
//
// Resolved target: ioctl
// Target address:  0x2440B8
// GOT/IAT slot:    0x23E520
// Slot symbol:     off_23E520
// Target type:     int(int fd, unsigned __int64 request, ...)
// ============================================================

/* see target sig */ .ioctl(/* see target signature */)
{
    // Tail-call to ioctl via GOT/IAT indirection
    return ioctl(/* forwarded args */);
}


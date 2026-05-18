// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19400
// Name:            .fcntl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19400 jmp     cs:off_23E1E8
//
// Resolved target: fcntl
// Target address:  0x243D48
// GOT/IAT slot:    0x23E1E8
// Slot symbol:     off_23E1E8
// Target type:     int(int fd, int cmd, ...)
// ============================================================

/* see target sig */ .fcntl(/* see target signature */)
{
    // Tail-call to fcntl via GOT/IAT indirection
    return fcntl(/* forwarded args */);
}


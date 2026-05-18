// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196D0
// Name:            .dup2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196D0 jmp     cs:off_23E350
//
// Resolved target: dup2
// Target address:  0x243ED0
// GOT/IAT slot:    0x23E350
// Slot symbol:     off_23E350
// Target type:     int(int fd, int fd2)
// ============================================================

/* see target sig */ .dup2(/* see target signature */)
{
    // Tail-call to dup2 via GOT/IAT indirection
    return dup2(/* forwarded args */);
}


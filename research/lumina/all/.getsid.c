// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193D0
// Name:            .getsid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193D0 jmp     cs:off_23E1D0
//
// Resolved target: getsid
// Target address:  0x243D30
// GOT/IAT slot:    0x23E1D0
// Slot symbol:     off_23E1D0
// Target type:     __pid_t(__pid_t pid)
// ============================================================

/* see target sig */ .getsid(/* see target signature */)
{
    // Tail-call to getsid via GOT/IAT indirection
    return getsid(/* forwarded args */);
}


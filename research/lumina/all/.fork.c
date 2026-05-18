// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19170
// Name:            .fork
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19170 jmp     cs:off_23E0A0
//
// Resolved target: fork
// Target address:  0x243BD8
// GOT/IAT slot:    0x23E0A0
// Slot symbol:     off_23E0A0
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .fork(/* see target signature */)
{
    // Tail-call to fork via GOT/IAT indirection
    return fork(/* forwarded args */);
}


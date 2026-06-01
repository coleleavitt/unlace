// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72E0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72E0 jmp     cs:off_1D158
//
// Resolved target: remember_problem
// Target address:  0x1D488
// GOT/IAT slot:    0x1D158
// Slot symbol:     off_1D158
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


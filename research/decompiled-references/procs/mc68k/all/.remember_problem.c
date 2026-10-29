// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64B0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64B0 jmp     cs:off_1D240
//
// Resolved target: remember_problem
// Target address:  0x1D730
// GOT/IAT slot:    0x1D240
// Slot symbol:     off_1D240
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


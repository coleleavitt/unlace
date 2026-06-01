// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65E0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65E0 jmp     cs:off_242D8
//
// Resolved target: remember_problem
// Target address:  0x260A8
// GOT/IAT slot:    0x242D8
// Slot symbol:     off_242D8
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


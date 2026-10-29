// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96B0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96B0 jmp     cs:off_2E340
//
// Resolved target: remember_problem
// Target address:  0x2E9B0
// GOT/IAT slot:    0x2E340
// Slot symbol:     off_2E340
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


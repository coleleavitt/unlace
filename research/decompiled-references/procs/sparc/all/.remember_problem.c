// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7540
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7540 jmp     cs:off_19288
//
// Resolved target: remember_problem
// Target address:  0x197B8
// GOT/IAT slot:    0x19288
// Slot symbol:     off_19288
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


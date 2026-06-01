// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_1A140
//
// Resolved target: remember_problem
// Target address:  0x1A3F8
// GOT/IAT slot:    0x1A140
// Slot symbol:     off_1A140
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


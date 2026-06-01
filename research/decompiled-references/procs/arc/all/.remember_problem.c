// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8640
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8640 jmp     cs:off_2A308
//
// Resolved target: remember_problem
// Target address:  0x2BD18
// GOT/IAT slot:    0x2A308
// Slot symbol:     off_2A308
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


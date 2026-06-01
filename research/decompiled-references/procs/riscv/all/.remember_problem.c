// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA710
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA710 jmp     cs:off_35370
//
// Resolved target: remember_problem
// Target address:  0x359C0
// GOT/IAT slot:    0x35370
// Slot symbol:     off_35370
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


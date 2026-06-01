// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72B0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72B0 jmp     cs:off_26140
//
// Resolved target: remember_problem
// Target address:  0x263F8
// GOT/IAT slot:    0x26140
// Slot symbol:     off_26140
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


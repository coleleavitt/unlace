// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54F0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54F0 jmp     cs:off_15260
//
// Resolved target: remember_problem
// Target address:  0x162F0
// GOT/IAT slot:    0x15260
// Slot symbol:     off_15260
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}


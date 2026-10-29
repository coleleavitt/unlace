// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42C0
// Name:            .Z3_solver_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42C0 jmp     cs:off_4E148
//
// Resolved target: Z3_solver_check
// Target address:  0x4F750
// GOT/IAT slot:    0x4E148
// Slot symbol:     off_4E148
// Target type:     <no type info>
// ============================================================

void .Z3_solver_check(/* see target signature */)
{
    // Tail-call to Z3_solver_check via GOT/IAT indirection
    return Z3_solver_check(/* forwarded args */);
}


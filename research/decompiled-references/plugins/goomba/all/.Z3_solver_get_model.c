// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4040
// Name:            .Z3_solver_get_model
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4040 jmp     cs:off_4E008
//
// Resolved target: Z3_solver_get_model
// Target address:  0x4F608
// GOT/IAT slot:    0x4E008
// Slot symbol:     off_4E008
// Target type:     <no type info>
// ============================================================

void .Z3_solver_get_model(/* see target signature */)
{
    // Tail-call to Z3_solver_get_model via GOT/IAT indirection
    return Z3_solver_get_model(/* forwarded args */);
}


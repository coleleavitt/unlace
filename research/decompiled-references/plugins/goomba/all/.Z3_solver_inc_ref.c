// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A80
// Name:            .Z3_solver_inc_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A80 jmp     cs:off_4E528
//
// Resolved target: Z3_solver_inc_ref
// Target address:  0x4FB60
// GOT/IAT slot:    0x4E528
// Slot symbol:     off_4E528
// Target type:     <no type info>
// ============================================================

void .Z3_solver_inc_ref(/* see target signature */)
{
    // Tail-call to Z3_solver_inc_ref via GOT/IAT indirection
    return Z3_solver_inc_ref(/* forwarded args */);
}


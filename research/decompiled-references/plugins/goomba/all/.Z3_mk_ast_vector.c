// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4780
// Name:            .Z3_mk_ast_vector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4780 jmp     cs:off_4E3A8
//
// Resolved target: Z3_mk_ast_vector
// Target address:  0x4F9C0
// GOT/IAT slot:    0x4E3A8
// Slot symbol:     off_4E3A8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_ast_vector(/* see target signature */)
{
    // Tail-call to Z3_mk_ast_vector via GOT/IAT indirection
    return Z3_mk_ast_vector(/* forwarded args */);
}


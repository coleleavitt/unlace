// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A10
// Name:            .Z3_ast_vector_inc_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A10 jmp     cs:off_4E4F0
//
// Resolved target: Z3_ast_vector_inc_ref
// Target address:  0x4FB28
// GOT/IAT slot:    0x4E4F0
// Slot symbol:     off_4E4F0
// Target type:     <no type info>
// ============================================================

void .Z3_ast_vector_inc_ref(/* see target signature */)
{
    // Tail-call to Z3_ast_vector_inc_ref via GOT/IAT indirection
    return Z3_ast_vector_inc_ref(/* forwarded args */);
}


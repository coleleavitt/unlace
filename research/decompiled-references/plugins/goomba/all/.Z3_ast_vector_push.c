// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40F0
// Name:            .Z3_ast_vector_push
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40F0 jmp     cs:off_4E060
//
// Resolved target: Z3_ast_vector_push
// Target address:  0x4F660
// GOT/IAT slot:    0x4E060
// Slot symbol:     off_4E060
// Target type:     <no type info>
// ============================================================

void .Z3_ast_vector_push(/* see target signature */)
{
    // Tail-call to Z3_ast_vector_push via GOT/IAT indirection
    return Z3_ast_vector_push(/* forwarded args */);
}


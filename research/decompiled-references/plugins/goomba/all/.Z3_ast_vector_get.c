// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41C0
// Name:            .Z3_ast_vector_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41C0 jmp     cs:off_4E0C8
//
// Resolved target: Z3_ast_vector_get
// Target address:  0x4F6D0
// GOT/IAT slot:    0x4E0C8
// Slot symbol:     off_4E0C8
// Target type:     <no type info>
// ============================================================

void .Z3_ast_vector_get(/* see target signature */)
{
    // Tail-call to Z3_ast_vector_get via GOT/IAT indirection
    return Z3_ast_vector_get(/* forwarded args */);
}


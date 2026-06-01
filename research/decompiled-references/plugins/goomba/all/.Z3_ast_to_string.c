// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4300
// Name:            .Z3_ast_to_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4300 jmp     cs:off_4E168
//
// Resolved target: Z3_ast_to_string
// Target address:  0x4F770
// GOT/IAT slot:    0x4E168
// Slot symbol:     off_4E168
// Target type:     <no type info>
// ============================================================

void .Z3_ast_to_string(/* see target signature */)
{
    // Tail-call to Z3_ast_to_string via GOT/IAT indirection
    return Z3_ast_to_string(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4990
// Name:            .Z3_set_ast_print_mode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4990 jmp     cs:off_4E4B0
//
// Resolved target: Z3_set_ast_print_mode
// Target address:  0x4FAE8
// GOT/IAT slot:    0x4E4B0
// Slot symbol:     off_4E4B0
// Target type:     <no type info>
// ============================================================

void .Z3_set_ast_print_mode(/* see target signature */)
{
    // Tail-call to Z3_set_ast_print_mode via GOT/IAT indirection
    return Z3_set_ast_print_mode(/* forwarded args */);
}


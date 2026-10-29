// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41E0
// Name:            .Z3_model_get_const_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41E0 jmp     cs:off_4E0D8
//
// Resolved target: Z3_model_get_const_decl
// Target address:  0x4F6E0
// GOT/IAT slot:    0x4E0D8
// Slot symbol:     off_4E0D8
// Target type:     <no type info>
// ============================================================

void .Z3_model_get_const_decl(/* see target signature */)
{
    // Tail-call to Z3_model_get_const_decl via GOT/IAT indirection
    return Z3_model_get_const_decl(/* forwarded args */);
}


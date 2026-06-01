// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46F0
// Name:            .Z3_model_get_num_consts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46F0 jmp     cs:off_4E360
//
// Resolved target: Z3_model_get_num_consts
// Target address:  0x4F970
// GOT/IAT slot:    0x4E360
// Slot symbol:     off_4E360
// Target type:     <no type info>
// ============================================================

void .Z3_model_get_num_consts(/* see target signature */)
{
    // Tail-call to Z3_model_get_num_consts via GOT/IAT indirection
    return Z3_model_get_num_consts(/* forwarded args */);
}


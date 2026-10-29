// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40C0
// Name:            .Z3_params_dec_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40C0 jmp     cs:off_4E048
//
// Resolved target: Z3_params_dec_ref
// Target address:  0x4F648
// GOT/IAT slot:    0x4E048
// Slot symbol:     off_4E048
// Target type:     <no type info>
// ============================================================

void .Z3_params_dec_ref(/* see target signature */)
{
    // Tail-call to Z3_params_dec_ref via GOT/IAT indirection
    return Z3_params_dec_ref(/* forwarded args */);
}


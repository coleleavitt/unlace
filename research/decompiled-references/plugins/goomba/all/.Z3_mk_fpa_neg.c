// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41D0
// Name:            .Z3_mk_fpa_neg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41D0 jmp     cs:off_4E0D0
//
// Resolved target: Z3_mk_fpa_neg
// Target address:  0x4F6D8
// GOT/IAT slot:    0x4E0D0
// Slot symbol:     off_4E0D0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_neg(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_neg via GOT/IAT indirection
    return Z3_mk_fpa_neg(/* forwarded args */);
}


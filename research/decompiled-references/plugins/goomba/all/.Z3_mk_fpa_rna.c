// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A40
// Name:            .Z3_mk_fpa_rna
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4A40 jmp     cs:off_4E508
//
// Resolved target: Z3_mk_fpa_rna
// Target address:  0x4FB40
// GOT/IAT slot:    0x4E508
// Slot symbol:     off_4E508
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_rna(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_rna via GOT/IAT indirection
    return Z3_mk_fpa_rna(/* forwarded args */);
}


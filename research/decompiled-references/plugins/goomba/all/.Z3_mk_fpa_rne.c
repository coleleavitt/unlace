// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4570
// Name:            .Z3_mk_fpa_rne
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4570 jmp     cs:off_4E2A0
//
// Resolved target: Z3_mk_fpa_rne
// Target address:  0x4F8B0
// GOT/IAT slot:    0x4E2A0
// Slot symbol:     off_4E2A0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_rne(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_rne via GOT/IAT indirection
    return Z3_mk_fpa_rne(/* forwarded args */);
}


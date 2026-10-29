// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4810
// Name:            .Z3_mk_fpa_gt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4810 jmp     cs:off_4E3F0
//
// Resolved target: Z3_mk_fpa_gt
// Target address:  0x4FA10
// GOT/IAT slot:    0x4E3F0
// Slot symbol:     off_4E3F0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_gt(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_gt via GOT/IAT indirection
    return Z3_mk_fpa_gt(/* forwarded args */);
}


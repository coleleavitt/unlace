// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44B0
// Name:            .Z3_mk_fpa_rtz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44B0 jmp     cs:off_4E240
//
// Resolved target: Z3_mk_fpa_rtz
// Target address:  0x4F850
// GOT/IAT slot:    0x4E240
// Slot symbol:     off_4E240
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_rtz(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_rtz via GOT/IAT indirection
    return Z3_mk_fpa_rtz(/* forwarded args */);
}


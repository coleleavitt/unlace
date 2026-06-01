// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49F0
// Name:            .Z3_mk_fpa_rtn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x49F0 jmp     cs:off_4E4E0
//
// Resolved target: Z3_mk_fpa_rtn
// Target address:  0x4FB18
// GOT/IAT slot:    0x4E4E0
// Slot symbol:     off_4E4E0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_rtn(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_rtn via GOT/IAT indirection
    return Z3_mk_fpa_rtn(/* forwarded args */);
}


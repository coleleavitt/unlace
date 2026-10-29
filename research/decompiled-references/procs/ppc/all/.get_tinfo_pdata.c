// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20480
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20480 jmp     cs:off_95228
//
// Resolved target: get_tinfo_pdata
// Target address:  0x95C60
// GOT/IAT slot:    0x95228
// Slot symbol:     off_95228
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}


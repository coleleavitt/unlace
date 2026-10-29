// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42D0
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42D0 jmp     cs:off_28150
//
// Resolved target: get_tinfo_pdata
// Target address:  0x29AE8
// GOT/IAT slot:    0x28150
// Slot symbol:     off_28150
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}


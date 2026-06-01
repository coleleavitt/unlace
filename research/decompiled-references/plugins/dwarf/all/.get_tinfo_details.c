// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA900
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA900 jmp     cs:off_CA468
//
// Resolved target: get_tinfo_details
// Target address:  0xD0DA8
// GOT/IAT slot:    0xCA468
// Slot symbol:     off_CA468
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}


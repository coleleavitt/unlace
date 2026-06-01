// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D850
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D850 jmp     cs:off_B3410
//
// Resolved target: get_tinfo_details
// Target address:  0xB3BB0
// GOT/IAT slot:    0xB3410
// Slot symbol:     off_B3410
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}


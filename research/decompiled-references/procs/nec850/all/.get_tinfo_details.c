// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9690
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9690 jmp     cs:off_2E330
//
// Resolved target: get_tinfo_details
// Target address:  0x2E9A0
// GOT/IAT slot:    0x2E330
// Slot symbol:     off_2E330
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}


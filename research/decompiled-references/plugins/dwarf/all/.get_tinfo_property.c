// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC80
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC80 jmp     cs:off_CA628
//
// Resolved target: get_tinfo_property
// Target address:  0xD0F88
// GOT/IAT slot:    0xCA628
// Slot symbol:     off_CA628
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


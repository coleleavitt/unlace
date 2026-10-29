// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6970
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6970 jmp     cs:off_2F4A0
//
// Resolved target: get_tinfo_property
// Target address:  0x2FB30
// GOT/IAT slot:    0x2F4A0
// Slot symbol:     off_2F4A0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


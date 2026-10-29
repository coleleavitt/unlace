// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_29260
//
// Resolved target: get_tinfo_property
// Target address:  0x29628
// GOT/IAT slot:    0x29260
// Slot symbol:     off_29260
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


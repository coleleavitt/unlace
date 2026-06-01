// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA690
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA690 jmp     cs:off_CA330
//
// Resolved target: set_tinfo_property
// Target address:  0xD0C68
// GOT/IAT slot:    0xCA330
// Slot symbol:     off_CA330
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}


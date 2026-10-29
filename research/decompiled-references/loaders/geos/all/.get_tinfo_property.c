// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_81C8
//
// Resolved target: get_tinfo_property
// Target address:  0x8440
// GOT/IAT slot:    0x81C8
// Slot symbol:     off_81C8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


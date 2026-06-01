// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7720
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7720 jmp     cs:off_19378
//
// Resolved target: get_tinfo_property
// Target address:  0x198C0
// GOT/IAT slot:    0x19378
// Slot symbol:     off_19378
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


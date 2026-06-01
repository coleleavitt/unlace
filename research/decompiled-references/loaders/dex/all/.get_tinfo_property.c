// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3710
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3710 jmp     cs:off_28370
//
// Resolved target: get_tinfo_property
// Target address:  0x28838
// GOT/IAT slot:    0x28370
// Slot symbol:     off_28370
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


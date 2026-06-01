// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8860
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8860 jmp     cs:off_2A418
//
// Resolved target: get_tinfo_property
// Target address:  0x2BE40
// GOT/IAT slot:    0x2A418
// Slot symbol:     off_2A418
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}


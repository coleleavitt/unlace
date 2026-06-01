// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6290
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6290 jmp     cs:off_2D130
//
// Resolved target: get_first_dref_from
// Target address:  0x2D630
// GOT/IAT slot:    0x2D130
// Slot symbol:     off_2D130
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}


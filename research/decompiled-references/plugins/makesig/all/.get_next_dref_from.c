// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31E0
// Name:            .get_next_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31E0 jmp     cs:off_200D8
//
// Resolved target: get_next_dref_from
// Target address:  0x219E8
// GOT/IAT slot:    0x200D8
// Slot symbol:     off_200D8
// Target type:     <no type info>
// ============================================================

void .get_next_dref_from(/* see target signature */)
{
    // Tail-call to get_next_dref_from via GOT/IAT indirection
    return get_next_dref_from(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31A0
// Name:            .get_next_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31A0 jmp     cs:off_200B8
//
// Resolved target: get_next_fcref_from
// Target address:  0x219C8
// GOT/IAT slot:    0x200B8
// Slot symbol:     off_200B8
// Target type:     <no type info>
// ============================================================

void .get_next_fcref_from(/* see target signature */)
{
    // Tail-call to get_next_fcref_from via GOT/IAT indirection
    return get_next_fcref_from(/* forwarded args */);
}


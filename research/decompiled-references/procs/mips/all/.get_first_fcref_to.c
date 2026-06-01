// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191C0
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191C0 jmp     cs:off_750C8
//
// Resolved target: get_first_fcref_to
// Target address:  0x75918
// GOT/IAT slot:    0x750C8
// Slot symbol:     off_750C8
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}


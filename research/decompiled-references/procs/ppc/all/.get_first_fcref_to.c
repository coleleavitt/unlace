// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20260
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20260 jmp     cs:off_95118
//
// Resolved target: get_first_fcref_to
// Target address:  0x95B50
// GOT/IAT slot:    0x95118
// Slot symbol:     off_95118
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}


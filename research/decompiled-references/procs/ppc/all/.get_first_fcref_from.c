// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x205D0
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x205D0 jmp     cs:off_952D0
//
// Resolved target: get_first_fcref_from
// Target address:  0x95D08
// GOT/IAT slot:    0x952D0
// Slot symbol:     off_952D0
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}


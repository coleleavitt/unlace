// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9D0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9D0 jmp     cs:off_CA4D0
//
// Resolved target: get_idati
// Target address:  0xD0E18
// GOT/IAT slot:    0xCA4D0
// Slot symbol:     off_CA4D0
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}


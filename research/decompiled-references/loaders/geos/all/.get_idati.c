// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_8170
//
// Resolved target: get_idati
// Target address:  0x83D8
// GOT/IAT slot:    0x8170
// Slot symbol:     off_8170
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}


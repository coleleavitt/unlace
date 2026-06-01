// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6170
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6170 jmp     cs:off_2F0A0
//
// Resolved target: get_flags_ex
// Target address:  0x2F710
// GOT/IAT slot:    0x2F0A0
// Slot symbol:     off_2F0A0
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}


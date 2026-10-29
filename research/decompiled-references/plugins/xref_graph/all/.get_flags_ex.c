// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16730
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16730 jmp     cs:off_4F380
//
// Resolved target: get_flags_ex
// Target address:  0x503D0
// GOT/IAT slot:    0x4F380
// Slot symbol:     off_4F380
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}


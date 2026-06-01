// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_A020
//
// Resolved target: get_flags_ex
// Target address:  0xB2F0
// GOT/IAT slot:    0xA020
// Slot symbol:     off_A020
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}


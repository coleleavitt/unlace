// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .get_prev_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_B1B8
//
// Resolved target: get_prev_fixup_ea
// Target address:  0xB650
// GOT/IAT slot:    0xB1B8
// Slot symbol:     off_B1B8
// Target type:     <no type info>
// ============================================================

void .get_prev_fixup_ea(/* see target signature */)
{
    // Tail-call to get_prev_fixup_ea via GOT/IAT indirection
    return get_prev_fixup_ea(/* forwarded args */);
}


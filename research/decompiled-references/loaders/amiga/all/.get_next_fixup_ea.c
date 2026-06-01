// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .get_next_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: get_next_fixup_ea
// Target address:  0x51F0
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .get_next_fixup_ea(/* see target signature */)
{
    // Tail-call to get_next_fixup_ea via GOT/IAT indirection
    return get_next_fixup_ea(/* forwarded args */);
}


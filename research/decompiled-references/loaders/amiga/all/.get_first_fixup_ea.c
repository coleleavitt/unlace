// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            .get_first_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_50E0
//
// Resolved target: get_first_fixup_ea
// Target address:  0x5220
// GOT/IAT slot:    0x50E0
// Slot symbol:     off_50E0
// Target type:     <no type info>
// ============================================================

void .get_first_fixup_ea(/* see target signature */)
{
    // Tail-call to get_first_fixup_ea via GOT/IAT indirection
    return get_first_fixup_ea(/* forwarded args */);
}


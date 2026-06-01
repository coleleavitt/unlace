// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .find_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_60B8
//
// Resolved target: find_custom_fixup
// Target address:  0x6240
// GOT/IAT slot:    0x60B8
// Slot symbol:     off_60B8
// Target type:     <no type info>
// ============================================================

void .find_custom_fixup(/* see target signature */)
{
    // Tail-call to find_custom_fixup via GOT/IAT indirection
    return find_custom_fixup(/* forwarded args */);
}


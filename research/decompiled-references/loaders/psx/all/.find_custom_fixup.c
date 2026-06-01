// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .find_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_A110
//
// Resolved target: find_custom_fixup
// Target address:  0xA3C0
// GOT/IAT slot:    0xA110
// Slot symbol:     off_A110
// Target type:     <no type info>
// ============================================================

void .find_custom_fixup(/* see target signature */)
{
    // Tail-call to find_custom_fixup via GOT/IAT indirection
    return find_custom_fixup(/* forwarded args */);
}


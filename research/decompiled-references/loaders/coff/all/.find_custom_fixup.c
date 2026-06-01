// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4530
// Name:            .find_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4530 jmp     cs:off_23280
//
// Resolved target: find_custom_fixup
// Target address:  0x236A0
// GOT/IAT slot:    0x23280
// Slot symbol:     off_23280
// Target type:     <no type info>
// ============================================================

void .find_custom_fixup(/* see target signature */)
{
    // Tail-call to find_custom_fixup via GOT/IAT indirection
    return find_custom_fixup(/* forwarded args */);
}


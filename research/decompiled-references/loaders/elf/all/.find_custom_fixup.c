// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96F0
// Name:            .find_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96F0 jmp     cs:off_89360
//
// Resolved target: find_custom_fixup
// Target address:  0x8C668
// GOT/IAT slot:    0x89360
// Slot symbol:     off_89360
// Target type:     <no type info>
// ============================================================

void .find_custom_fixup(/* see target signature */)
{
    // Tail-call to find_custom_fixup via GOT/IAT indirection
    return find_custom_fixup(/* forwarded args */);
}


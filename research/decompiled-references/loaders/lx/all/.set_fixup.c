// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_B0F8
//
// Resolved target: set_fixup
// Target address:  0xB3A0
// GOT/IAT slot:    0xB0F8
// Slot symbol:     off_B0F8
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


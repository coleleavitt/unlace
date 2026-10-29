// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_B160
//
// Resolved target: set_fixup
// Target address:  0xB5F8
// GOT/IAT slot:    0xB160
// Slot symbol:     off_B160
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


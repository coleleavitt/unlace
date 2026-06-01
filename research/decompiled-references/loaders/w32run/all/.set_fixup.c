// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10D0 jmp     cs:off_4050
//
// Resolved target: set_fixup
// Target address:  0x4178
// GOT/IAT slot:    0x4050
// Slot symbol:     off_4050
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_B0E8
//
// Resolved target: set_fixup
// Target address:  0xB380
// GOT/IAT slot:    0xB0E8
// Slot symbol:     off_B0E8
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_6088
//
// Resolved target: set_fixup
// Target address:  0x6210
// GOT/IAT slot:    0x6088
// Slot symbol:     off_6088
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


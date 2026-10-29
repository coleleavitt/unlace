// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3300
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3300 jmp     cs:off_14168
//
// Resolved target: set_fixup
// Target address:  0x14758
// GOT/IAT slot:    0x14168
// Slot symbol:     off_14168
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


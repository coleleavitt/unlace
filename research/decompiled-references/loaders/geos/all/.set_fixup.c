// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_8100
//
// Resolved target: set_fixup
// Target address:  0x8360
// GOT/IAT slot:    0x8100
// Slot symbol:     off_8100
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


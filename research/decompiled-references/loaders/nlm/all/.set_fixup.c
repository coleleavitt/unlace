// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_80A0
//
// Resolved target: set_fixup
// Target address:  0x8780
// GOT/IAT slot:    0x80A0
// Slot symbol:     off_80A0
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_5058
//
// Resolved target: set_fixup
// Target address:  0x5170
// GOT/IAT slot:    0x5058
// Slot symbol:     off_5058
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}


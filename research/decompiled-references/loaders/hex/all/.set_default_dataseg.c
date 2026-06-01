// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_50D0
//
// Resolved target: set_default_dataseg
// Target address:  0x52B0
// GOT/IAT slot:    0x50D0
// Slot symbol:     off_50D0
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


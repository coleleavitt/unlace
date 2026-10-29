// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_8180
//
// Resolved target: set_default_dataseg
// Target address:  0x83F0
// GOT/IAT slot:    0x8180
// Slot symbol:     off_8180
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


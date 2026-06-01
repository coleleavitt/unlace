// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_B1A0
//
// Resolved target: set_default_dataseg
// Target address:  0xB458
// GOT/IAT slot:    0xB1A0
// Slot symbol:     off_B1A0
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


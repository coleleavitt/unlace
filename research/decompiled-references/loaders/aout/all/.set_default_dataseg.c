// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_60E0
//
// Resolved target: set_default_dataseg
// Target address:  0x6270
// GOT/IAT slot:    0x60E0
// Slot symbol:     off_60E0
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


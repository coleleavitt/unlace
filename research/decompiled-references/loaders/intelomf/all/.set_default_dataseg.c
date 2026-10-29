// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_5100
//
// Resolved target: set_default_dataseg
// Target address:  0x5358
// GOT/IAT slot:    0x5100
// Slot symbol:     off_5100
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


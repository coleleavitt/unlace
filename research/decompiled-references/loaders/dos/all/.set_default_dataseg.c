// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24F0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24F0 jmp     cs:off_B260
//
// Resolved target: set_default_dataseg
// Target address:  0xB708
// GOT/IAT slot:    0xB260
// Slot symbol:     off_B260
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


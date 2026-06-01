// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6680
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6680 jmp     cs:off_24328
//
// Resolved target: set_default_dataseg
// Target address:  0x26108
// GOT/IAT slot:    0x24328
// Slot symbol:     off_24328
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


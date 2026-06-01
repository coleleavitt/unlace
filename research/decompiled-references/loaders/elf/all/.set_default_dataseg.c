// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9830
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9830 jmp     cs:off_89400
//
// Resolved target: set_default_dataseg
// Target address:  0x8C720
// GOT/IAT slot:    0x89400
// Slot symbol:     off_89400
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


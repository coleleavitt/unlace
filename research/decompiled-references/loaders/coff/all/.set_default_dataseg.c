// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4650
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4650 jmp     cs:off_23310
//
// Resolved target: set_default_dataseg
// Target address:  0x23740
// GOT/IAT slot:    0x23310
// Slot symbol:     off_23310
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


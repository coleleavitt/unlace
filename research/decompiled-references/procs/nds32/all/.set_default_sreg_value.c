// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81C0
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81C0 jmp     cs:off_2A0C8
//
// Resolved target: set_default_sreg_value
// Target address:  0x2A638
// GOT/IAT slot:    0x2A0C8
// Slot symbol:     off_2A0C8
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1F0
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1F0 jmp     cs:off_350E0
//
// Resolved target: set_default_sreg_value
// Target address:  0x35730
// GOT/IAT slot:    0x350E0
// Slot symbol:     off_350E0
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}


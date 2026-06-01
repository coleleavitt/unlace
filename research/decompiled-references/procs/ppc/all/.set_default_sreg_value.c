// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20310
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20310 jmp     cs:off_95170
//
// Resolved target: set_default_sreg_value
// Target address:  0x95BA8
// GOT/IAT slot:    0x95170
// Slot symbol:     off_95170
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}


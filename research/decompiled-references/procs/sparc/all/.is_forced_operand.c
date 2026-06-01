// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7770
// Name:            .is_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7770 jmp     cs:off_193A0
//
// Resolved target: is_forced_operand
// Target address:  0x198E8
// GOT/IAT slot:    0x193A0
// Slot symbol:     off_193A0
// Target type:     <no type info>
// ============================================================

void .is_forced_operand(/* see target signature */)
{
    // Tail-call to is_forced_operand via GOT/IAT indirection
    return is_forced_operand(/* forwarded args */);
}


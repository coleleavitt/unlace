// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D10
// Name:            .is_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D10 jmp     cs:off_75670
//
// Resolved target: is_forced_operand
// Target address:  0x75ED8
// GOT/IAT slot:    0x75670
// Slot symbol:     off_75670
// Target type:     <no type info>
// ============================================================

void .is_forced_operand(/* see target signature */)
{
    // Tail-call to is_forced_operand via GOT/IAT indirection
    return is_forced_operand(/* forwarded args */);
}


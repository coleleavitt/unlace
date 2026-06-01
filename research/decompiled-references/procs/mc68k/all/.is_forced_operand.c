// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66C0
// Name:            .is_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66C0 jmp     cs:off_1D348
//
// Resolved target: is_forced_operand
// Target address:  0x1D850
// GOT/IAT slot:    0x1D348
// Slot symbol:     off_1D348
// Target type:     <no type info>
// ============================================================

void .is_forced_operand(/* see target signature */)
{
    // Tail-call to is_forced_operand via GOT/IAT indirection
    return is_forced_operand(/* forwarded args */);
}


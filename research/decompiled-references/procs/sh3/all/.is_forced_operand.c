// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5700
// Name:            .is_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5700 jmp     cs:off_15368
//
// Resolved target: is_forced_operand
// Target address:  0x16410
// GOT/IAT slot:    0x15368
// Slot symbol:     off_15368
// Target type:     <no type info>
// ============================================================

void .is_forced_operand(/* see target signature */)
{
    // Tail-call to is_forced_operand via GOT/IAT indirection
    return is_forced_operand(/* forwarded args */);
}


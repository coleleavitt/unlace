// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20910
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20910 jmp     cs:off_95470
//
// Resolved target: set_target_assembler
// Target address:  0x95EA8
// GOT/IAT slot:    0x95470
// Slot symbol:     off_95470
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}


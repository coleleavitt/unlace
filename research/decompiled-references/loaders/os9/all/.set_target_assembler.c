// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_4078
//
// Resolved target: set_target_assembler
// Target address:  0x4190
// GOT/IAT slot:    0x4078
// Slot symbol:     off_4078
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}


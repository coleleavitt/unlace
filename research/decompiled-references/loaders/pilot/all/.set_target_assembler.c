// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_80C0
//
// Resolved target: set_target_assembler
// Target address:  0x82A0
// GOT/IAT slot:    0x80C0
// Slot symbol:     off_80C0
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9210
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9210 jmp     cs:off_890F0
//
// Resolved target: create_insn
// Target address:  0x8C3F0
// GOT/IAT slot:    0x890F0
// Slot symbol:     off_890F0
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


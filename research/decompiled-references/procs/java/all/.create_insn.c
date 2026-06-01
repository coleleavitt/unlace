// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6170
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6170 jmp     cs:off_2D0A0
//
// Resolved target: create_insn
// Target address:  0x2D5A0
// GOT/IAT slot:    0x2D0A0
// Slot symbol:     off_2D0A0
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


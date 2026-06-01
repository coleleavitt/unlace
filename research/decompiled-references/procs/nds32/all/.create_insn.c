// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8190
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8190 jmp     cs:off_2A0B0
//
// Resolved target: create_insn
// Target address:  0x2A620
// GOT/IAT slot:    0x2A0B0
// Slot symbol:     off_2A0B0
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


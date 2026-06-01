// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_5028
//
// Resolved target: create_insn
// Target address:  0x5140
// GOT/IAT slot:    0x5028
// Slot symbol:     off_5028
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


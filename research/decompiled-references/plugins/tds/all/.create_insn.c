// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_A048
//
// Resolved target: create_insn
// Target address:  0xA278
// GOT/IAT slot:    0xA048
// Slot symbol:     off_A048
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


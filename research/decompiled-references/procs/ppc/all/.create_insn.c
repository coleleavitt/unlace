// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202E0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202E0 jmp     cs:off_95158
//
// Resolved target: create_insn
// Target address:  0x95B90
// GOT/IAT slot:    0x95158
// Slot symbol:     off_95158
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


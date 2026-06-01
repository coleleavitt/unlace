// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7120
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7120 jmp     cs:off_19078
//
// Resolved target: create_insn
// Target address:  0x195A8
// GOT/IAT slot:    0x19078
// Slot symbol:     off_19078
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


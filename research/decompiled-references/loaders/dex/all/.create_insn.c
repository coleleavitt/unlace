// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31A0
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31A0 jmp     cs:off_280B8
//
// Resolved target: create_insn
// Target address:  0x28568
// GOT/IAT slot:    0x280B8
// Slot symbol:     off_280B8
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}


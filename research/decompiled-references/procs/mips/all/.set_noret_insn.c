// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193E0
// Name:            .set_noret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193E0 jmp     cs:off_751D8
//
// Resolved target: set_noret_insn
// Target address:  0x75A28
// GOT/IAT slot:    0x751D8
// Slot symbol:     off_751D8
// Target type:     <no type info>
// ============================================================

void .set_noret_insn(/* see target signature */)
{
    // Tail-call to set_noret_insn via GOT/IAT indirection
    return set_noret_insn(/* forwarded args */);
}


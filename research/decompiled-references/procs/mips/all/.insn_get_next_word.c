// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AB0
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AB0 jmp     cs:off_75540
//
// Resolved target: insn_get_next_word
// Target address:  0x75DA0
// GOT/IAT slot:    0x75540
// Slot symbol:     off_75540
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}


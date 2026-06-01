// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5580
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5580 jmp     cs:off_152A8
//
// Resolved target: insn_get_next_word
// Target address:  0x16348
// GOT/IAT slot:    0x152A8
// Slot symbol:     off_152A8
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}


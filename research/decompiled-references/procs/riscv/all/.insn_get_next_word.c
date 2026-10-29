// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA800
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA800 jmp     cs:off_353E8
//
// Resolved target: insn_get_next_word
// Target address:  0x35A48
// GOT/IAT slot:    0x353E8
// Slot symbol:     off_353E8
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}


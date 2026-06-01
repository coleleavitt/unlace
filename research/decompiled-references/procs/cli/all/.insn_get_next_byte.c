// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3140 jmp     cs:off_1A088
//
// Resolved target: insn_get_next_byte
// Target address:  0x1A340
// GOT/IAT slot:    0x1A088
// Slot symbol:     off_1A088
// Target type:     <no type info>
// ============================================================

void .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}


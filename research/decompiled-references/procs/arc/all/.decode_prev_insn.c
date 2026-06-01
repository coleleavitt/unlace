// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84B0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84B0 jmp     cs:off_2A240
//
// Resolved target: decode_prev_insn
// Target address:  0x2BC50
// GOT/IAT slot:    0x2A240
// Slot symbol:     off_2A240
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


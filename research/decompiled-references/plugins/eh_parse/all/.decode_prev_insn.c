// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6500
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6500 jmp     cs:off_2F268
//
// Resolved target: decode_prev_insn
// Target address:  0x2F8D8
// GOT/IAT slot:    0x2F268
// Slot symbol:     off_2F268
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7210
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7210 jmp     cs:off_260F0
//
// Resolved target: decode_prev_insn
// Target address:  0x263A8
// GOT/IAT slot:    0x260F0
// Slot symbol:     off_260F0
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


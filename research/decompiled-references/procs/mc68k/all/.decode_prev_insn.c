// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63D0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63D0 jmp     cs:off_1D1D0
//
// Resolved target: decode_prev_insn
// Target address:  0x1D6C0
// GOT/IAT slot:    0x1D1D0
// Slot symbol:     off_1D1D0
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7400
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7400 jmp     cs:off_191E8
//
// Resolved target: decode_prev_insn
// Target address:  0x19718
// GOT/IAT slot:    0x191E8
// Slot symbol:     off_191E8
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


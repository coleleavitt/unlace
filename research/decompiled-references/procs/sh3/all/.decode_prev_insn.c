// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53C0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53C0 jmp     cs:off_151C8
//
// Resolved target: decode_prev_insn
// Target address:  0x16258
// GOT/IAT slot:    0x151C8
// Slot symbol:     off_151C8
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6520
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6520 jmp     cs:off_2D278
//
// Resolved target: decode_insn
// Target address:  0x2D778
// GOT/IAT slot:    0x2D278
// Slot symbol:     off_2D278
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


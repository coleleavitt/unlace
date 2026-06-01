// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92C0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92C0 jmp     cs:off_26148
//
// Resolved target: decode_insn
// Target address:  0x26458
// GOT/IAT slot:    0x26148
// Slot symbol:     off_26148
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


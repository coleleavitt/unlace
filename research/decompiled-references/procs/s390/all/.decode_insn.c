// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10230
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10230 jmp     cs:off_2E100
//
// Resolved target: decode_insn
// Target address:  0x36D78
// GOT/IAT slot:    0x2E100
// Slot symbol:     off_2E100
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


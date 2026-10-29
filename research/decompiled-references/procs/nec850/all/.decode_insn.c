// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9670
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9670 jmp     cs:off_2E320
//
// Resolved target: decode_insn
// Target address:  0x2E990
// GOT/IAT slot:    0x2E320
// Slot symbol:     off_2E320
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


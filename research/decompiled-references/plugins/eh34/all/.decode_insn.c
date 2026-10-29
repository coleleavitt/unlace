// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6510
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6510 jmp     cs:off_8D270
//
// Resolved target: decode_insn
// Target address:  0x8D810
// GOT/IAT slot:    0x8D270
// Slot symbol:     off_8D270
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


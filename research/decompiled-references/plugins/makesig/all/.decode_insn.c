// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3400
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3400 jmp     cs:off_201E8
//
// Resolved target: decode_insn
// Target address:  0x21B08
// GOT/IAT slot:    0x201E8
// Slot symbol:     off_201E8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


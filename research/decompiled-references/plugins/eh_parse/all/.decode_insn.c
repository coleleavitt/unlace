// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66B0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66B0 jmp     cs:off_2F340
//
// Resolved target: decode_insn
// Target address:  0x2F9B0
// GOT/IAT slot:    0x2F340
// Slot symbol:     off_2F340
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


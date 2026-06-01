// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A80
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A80 jmp     cs:off_95528
//
// Resolved target: decode_insn
// Target address:  0x95F60
// GOT/IAT slot:    0x95528
// Slot symbol:     off_95528
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


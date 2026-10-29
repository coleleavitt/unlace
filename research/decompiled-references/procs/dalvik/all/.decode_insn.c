// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5380
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5380 jmp     cs:off_1A1A8
//
// Resolved target: decode_insn
// Target address:  0x1A530
// GOT/IAT slot:    0x1A1A8
// Slot symbol:     off_1A1A8
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7D0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7D0 jmp     cs:off_B33D0
//
// Resolved target: decode_insn
// Target address:  0xB3B70
// GOT/IAT slot:    0xB33D0
// Slot symbol:     off_B33D0
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}


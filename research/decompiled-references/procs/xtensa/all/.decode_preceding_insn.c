// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7280
// Name:            .decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7280 jmp     cs:off_1D128
//
// Resolved target: decode_preceding_insn
// Target address:  0x1D458
// GOT/IAT slot:    0x1D128
// Slot symbol:     off_1D128
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .decode_preceding_insn(/* see target signature */)
{
    // Tail-call to decode_preceding_insn via GOT/IAT indirection
    return decode_preceding_insn(/* forwarded args */);
}


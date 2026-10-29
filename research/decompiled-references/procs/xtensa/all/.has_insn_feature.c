// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70D0
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70D0 jmp     cs:off_1D050
//
// Resolved target: has_insn_feature
// Target address:  0x1D380
// GOT/IAT slot:    0x1D050
// Slot symbol:     off_1D050
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}


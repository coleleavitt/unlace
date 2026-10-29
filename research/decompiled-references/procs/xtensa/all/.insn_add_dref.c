// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7070
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7070 jmp     cs:off_1D020
//
// Resolved target: insn_add_dref
// Target address:  0x1D350
// GOT/IAT slot:    0x1D020
// Slot symbol:     off_1D020
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}


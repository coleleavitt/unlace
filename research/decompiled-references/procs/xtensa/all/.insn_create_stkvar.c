// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73E0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73E0 jmp     cs:off_1D1D8
//
// Resolved target: insn_create_stkvar
// Target address:  0x1D520
// GOT/IAT slot:    0x1D1D8
// Slot symbol:     off_1D1D8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}


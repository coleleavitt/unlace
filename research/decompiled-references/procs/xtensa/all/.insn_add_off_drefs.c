// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70F0
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70F0 jmp     cs:off_1D060
//
// Resolved target: insn_add_off_drefs
// Target address:  0x1D390
// GOT/IAT slot:    0x1D060
// Slot symbol:     off_1D060
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}


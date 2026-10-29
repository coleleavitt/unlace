// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7110
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7110 jmp     cs:off_1D070
//
// Resolved target: insn_get_next_byte
// Target address:  0x1D3A0
// GOT/IAT slot:    0x1D070
// Slot symbol:     off_1D070
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}


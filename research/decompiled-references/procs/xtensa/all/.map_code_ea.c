// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73A0
// Name:            .map_code_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73A0 jmp     cs:off_1D1B8
//
// Resolved target: map_code_ea
// Target address:  0x1D500
// GOT/IAT slot:    0x1D1B8
// Slot symbol:     off_1D1B8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .map_code_ea(/* see target signature */)
{
    // Tail-call to map_code_ea via GOT/IAT indirection
    return map_code_ea(/* forwarded args */);
}


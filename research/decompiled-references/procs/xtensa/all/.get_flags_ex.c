// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7090
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7090 jmp     cs:off_1D030
//
// Resolved target: get_flags_ex
// Target address:  0x1D360
// GOT/IAT slot:    0x1D030
// Slot symbol:     off_1D030
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7330
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7330 jmp     cs:off_1D180
//
// Resolved target: get_segm_name
// Target address:  0x1D4C0
// GOT/IAT slot:    0x1D180
// Slot symbol:     off_1D180
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}


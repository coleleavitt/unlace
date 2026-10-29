// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7320
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7320 jmp     cs:off_1D178
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x1D4B8
// GOT/IAT slot:    0x1D178
// Slot symbol:     off_1D178
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}


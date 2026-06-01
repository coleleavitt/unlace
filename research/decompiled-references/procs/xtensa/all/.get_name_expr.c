// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71E0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71E0 jmp     cs:off_1D0D8
//
// Resolved target: get_name_expr
// Target address:  0x1D408
// GOT/IAT slot:    0x1D0D8
// Slot symbol:     off_1D0D8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}


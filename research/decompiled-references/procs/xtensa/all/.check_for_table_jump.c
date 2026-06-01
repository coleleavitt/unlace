// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7360
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7360 jmp     cs:off_1D198
//
// Resolved target: check_for_table_jump
// Target address:  0x1D4D8
// GOT/IAT slot:    0x1D198
// Slot symbol:     off_1D198
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


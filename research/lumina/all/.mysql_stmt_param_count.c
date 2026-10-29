// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193E0
// Name:            .mysql_stmt_param_count
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193E0 jmp     cs:off_23E1D8
//
// Resolved target: mysql_stmt_param_count
// Target address:  0x243D38
// GOT/IAT slot:    0x23E1D8
// Slot symbol:     off_23E1D8
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_param_count(/* see target signature */)
{
    // Tail-call to mysql_stmt_param_count via GOT/IAT indirection
    return mysql_stmt_param_count(/* forwarded args */);
}


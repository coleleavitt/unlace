// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BE0
// Name:            .mysql_stmt_bind_result
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BE0 jmp     cs:off_23E5D8
//
// Resolved target: mysql_stmt_bind_result
// Target address:  0x244188
// GOT/IAT slot:    0x23E5D8
// Slot symbol:     off_23E5D8
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_bind_result(/* see target signature */)
{
    // Tail-call to mysql_stmt_bind_result via GOT/IAT indirection
    return mysql_stmt_bind_result(/* forwarded args */);
}


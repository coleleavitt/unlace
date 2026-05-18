// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19350
// Name:            .mysql_stmt_store_result
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19350 jmp     cs:off_23E190
//
// Resolved target: mysql_stmt_store_result
// Target address:  0x243CD8
// GOT/IAT slot:    0x23E190
// Slot symbol:     off_23E190
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_store_result(/* see target signature */)
{
    // Tail-call to mysql_stmt_store_result via GOT/IAT indirection
    return mysql_stmt_store_result(/* forwarded args */);
}


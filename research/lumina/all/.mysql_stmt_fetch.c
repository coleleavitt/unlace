// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19EA0
// Name:            .mysql_stmt_fetch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19EA0 jmp     cs:off_23E738
//
// Resolved target: mysql_stmt_fetch
// Target address:  0x244318
// GOT/IAT slot:    0x23E738
// Slot symbol:     off_23E738
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_fetch(/* see target signature */)
{
    // Tail-call to mysql_stmt_fetch via GOT/IAT indirection
    return mysql_stmt_fetch(/* forwarded args */);
}


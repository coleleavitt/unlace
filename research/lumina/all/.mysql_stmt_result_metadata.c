// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A80
// Name:            .mysql_stmt_result_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A80 jmp     cs:off_23E528
//
// Resolved target: mysql_stmt_result_metadata
// Target address:  0x2440C0
// GOT/IAT slot:    0x23E528
// Slot symbol:     off_23E528
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_result_metadata(/* see target signature */)
{
    // Tail-call to mysql_stmt_result_metadata via GOT/IAT indirection
    return mysql_stmt_result_metadata(/* forwarded args */);
}


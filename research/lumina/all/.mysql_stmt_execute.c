// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19270
// Name:            .mysql_stmt_execute
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19270 jmp     cs:off_23E120
//
// Resolved target: mysql_stmt_execute
// Target address:  0x243C60
// GOT/IAT slot:    0x23E120
// Slot symbol:     off_23E120
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_execute(/* see target signature */)
{
    // Tail-call to mysql_stmt_execute via GOT/IAT indirection
    return mysql_stmt_execute(/* forwarded args */);
}


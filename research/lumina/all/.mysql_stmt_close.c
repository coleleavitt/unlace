// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19410
// Name:            .mysql_stmt_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19410 jmp     cs:off_23E1F0
//
// Resolved target: mysql_stmt_close
// Target address:  0x243D58
// GOT/IAT slot:    0x23E1F0
// Slot symbol:     off_23E1F0
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_close(/* see target signature */)
{
    // Tail-call to mysql_stmt_close via GOT/IAT indirection
    return mysql_stmt_close(/* forwarded args */);
}


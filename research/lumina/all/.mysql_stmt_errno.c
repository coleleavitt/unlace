// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19800
// Name:            .mysql_stmt_errno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19800 jmp     cs:off_23E3E8
//
// Resolved target: mysql_stmt_errno
// Target address:  0x243F70
// GOT/IAT slot:    0x23E3E8
// Slot symbol:     off_23E3E8
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_errno(/* see target signature */)
{
    // Tail-call to mysql_stmt_errno via GOT/IAT indirection
    return mysql_stmt_errno(/* forwarded args */);
}


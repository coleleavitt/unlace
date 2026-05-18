// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19360
// Name:            .mysql_stmt_error
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19360 jmp     cs:off_23E198
//
// Resolved target: mysql_stmt_error
// Target address:  0x243CE0
// GOT/IAT slot:    0x23E198
// Slot symbol:     off_23E198
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_error(/* see target signature */)
{
    // Tail-call to mysql_stmt_error via GOT/IAT indirection
    return mysql_stmt_error(/* forwarded args */);
}


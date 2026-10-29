// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19110
// Name:            .mysql_stmt_prepare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19110 jmp     cs:off_23E070
//
// Resolved target: mysql_stmt_prepare
// Target address:  0x243B98
// GOT/IAT slot:    0x23E070
// Slot symbol:     off_23E070
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_prepare(/* see target signature */)
{
    // Tail-call to mysql_stmt_prepare via GOT/IAT indirection
    return mysql_stmt_prepare(/* forwarded args */);
}


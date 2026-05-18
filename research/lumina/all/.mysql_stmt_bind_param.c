// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E60
// Name:            .mysql_stmt_bind_param
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E60 jmp     cs:off_23E718
//
// Resolved target: mysql_stmt_bind_param
// Target address:  0x2442E8
// GOT/IAT slot:    0x23E718
// Slot symbol:     off_23E718
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_bind_param(/* see target signature */)
{
    // Tail-call to mysql_stmt_bind_param via GOT/IAT indirection
    return mysql_stmt_bind_param(/* forwarded args */);
}


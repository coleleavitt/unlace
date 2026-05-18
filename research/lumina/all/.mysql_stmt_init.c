// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19580
// Name:            .mysql_stmt_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19580 jmp     cs:off_23E2A8
//
// Resolved target: mysql_stmt_init
// Target address:  0x243E20
// GOT/IAT slot:    0x23E2A8
// Slot symbol:     off_23E2A8
// Target type:     <no type info>
// ============================================================

void .mysql_stmt_init(/* see target signature */)
{
    // Tail-call to mysql_stmt_init via GOT/IAT indirection
    return mysql_stmt_init(/* forwarded args */);
}


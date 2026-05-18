// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C70
// Name:            .mysql_query
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C70 jmp     cs:off_23E620
//
// Resolved target: mysql_query
// Target address:  0x2441D0
// GOT/IAT slot:    0x23E620
// Slot symbol:     off_23E620
// Target type:     <no type info>
// ============================================================

void .mysql_query(/* see target signature */)
{
    // Tail-call to mysql_query via GOT/IAT indirection
    return mysql_query(/* forwarded args */);
}


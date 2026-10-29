// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C10
// Name:            .mysql_affected_rows
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C10 jmp     cs:off_23E5F0
//
// Resolved target: mysql_affected_rows
// Target address:  0x2441A0
// GOT/IAT slot:    0x23E5F0
// Slot symbol:     off_23E5F0
// Target type:     <no type info>
// ============================================================

void .mysql_affected_rows(/* see target signature */)
{
    // Tail-call to mysql_affected_rows via GOT/IAT indirection
    return mysql_affected_rows(/* forwarded args */);
}


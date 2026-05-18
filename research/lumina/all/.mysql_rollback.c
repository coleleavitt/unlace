// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BA0
// Name:            .mysql_rollback
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BA0 jmp     cs:off_23E5B8
//
// Resolved target: mysql_rollback
// Target address:  0x244168
// GOT/IAT slot:    0x23E5B8
// Slot symbol:     off_23E5B8
// Target type:     <no type info>
// ============================================================

void .mysql_rollback(/* see target signature */)
{
    // Tail-call to mysql_rollback via GOT/IAT indirection
    return mysql_rollback(/* forwarded args */);
}


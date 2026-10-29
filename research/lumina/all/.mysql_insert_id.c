// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196E0
// Name:            .mysql_insert_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196E0 jmp     cs:off_23E358
//
// Resolved target: mysql_insert_id
// Target address:  0x243ED8
// GOT/IAT slot:    0x23E358
// Slot symbol:     off_23E358
// Target type:     <no type info>
// ============================================================

void .mysql_insert_id(/* see target signature */)
{
    // Tail-call to mysql_insert_id via GOT/IAT indirection
    return mysql_insert_id(/* forwarded args */);
}


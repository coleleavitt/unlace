// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19ED0
// Name:            .mysql_num_fields
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19ED0 jmp     cs:off_23E750
//
// Resolved target: mysql_num_fields
// Target address:  0x244338
// GOT/IAT slot:    0x23E750
// Slot symbol:     off_23E750
// Target type:     <no type info>
// ============================================================

void .mysql_num_fields(/* see target signature */)
{
    // Tail-call to mysql_num_fields via GOT/IAT indirection
    return mysql_num_fields(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19950
// Name:            .mysql_fetch_fields
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19950 jmp     cs:off_23E490
//
// Resolved target: mysql_fetch_fields
// Target address:  0x244018
// GOT/IAT slot:    0x23E490
// Slot symbol:     off_23E490
// Target type:     <no type info>
// ============================================================

void .mysql_fetch_fields(/* see target signature */)
{
    // Tail-call to mysql_fetch_fields via GOT/IAT indirection
    return mysql_fetch_fields(/* forwarded args */);
}


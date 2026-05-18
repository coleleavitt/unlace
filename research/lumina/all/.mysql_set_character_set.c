// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19100
// Name:            .mysql_set_character_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19100 jmp     cs:off_23E068
//
// Resolved target: mysql_set_character_set
// Target address:  0x243B90
// GOT/IAT slot:    0x23E068
// Slot symbol:     off_23E068
// Target type:     <no type info>
// ============================================================

void .mysql_set_character_set(/* see target signature */)
{
    // Tail-call to mysql_set_character_set via GOT/IAT indirection
    return mysql_set_character_set(/* forwarded args */);
}


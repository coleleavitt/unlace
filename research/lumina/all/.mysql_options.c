// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19700
// Name:            .mysql_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19700 jmp     cs:off_23E368
//
// Resolved target: mysql_options
// Target address:  0x243EF0
// GOT/IAT slot:    0x23E368
// Slot symbol:     off_23E368
// Target type:     <no type info>
// ============================================================

void .mysql_options(/* see target signature */)
{
    // Tail-call to mysql_options via GOT/IAT indirection
    return mysql_options(/* forwarded args */);
}


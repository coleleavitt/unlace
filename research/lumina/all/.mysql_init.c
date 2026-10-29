// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E10
// Name:            .mysql_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E10 jmp     cs:off_23E6F0
//
// Resolved target: mysql_init
// Target address:  0x2442C0
// GOT/IAT slot:    0x23E6F0
// Slot symbol:     off_23E6F0
// Target type:     <no type info>
// ============================================================

void .mysql_init(/* see target signature */)
{
    // Tail-call to mysql_init via GOT/IAT indirection
    return mysql_init(/* forwarded args */);
}


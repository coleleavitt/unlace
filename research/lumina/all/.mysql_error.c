// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B50
// Name:            .mysql_error
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B50 jmp     cs:off_23E590
//
// Resolved target: mysql_error
// Target address:  0x244140
// GOT/IAT slot:    0x23E590
// Slot symbol:     off_23E590
// Target type:     <no type info>
// ============================================================

void .mysql_error(/* see target signature */)
{
    // Tail-call to mysql_error via GOT/IAT indirection
    return mysql_error(/* forwarded args */);
}


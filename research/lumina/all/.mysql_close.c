// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DE0
// Name:            .mysql_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DE0 jmp     cs:off_23E6D8
//
// Resolved target: mysql_close
// Target address:  0x2442A8
// GOT/IAT slot:    0x23E6D8
// Slot symbol:     off_23E6D8
// Target type:     <no type info>
// ============================================================

void .mysql_close(/* see target signature */)
{
    // Tail-call to mysql_close via GOT/IAT indirection
    return mysql_close(/* forwarded args */);
}


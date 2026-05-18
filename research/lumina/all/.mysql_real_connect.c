// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190A0
// Name:            .mysql_real_connect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190A0 jmp     cs:off_23E038
//
// Resolved target: mysql_real_connect
// Target address:  0x243B60
// GOT/IAT slot:    0x23E038
// Slot symbol:     off_23E038
// Target type:     <no type info>
// ============================================================

void .mysql_real_connect(/* see target signature */)
{
    // Tail-call to mysql_real_connect via GOT/IAT indirection
    return mysql_real_connect(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19380
// Name:            .mysql_errno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19380 jmp     cs:off_23E1A8
//
// Resolved target: mysql_errno
// Target address:  0x243CF0
// GOT/IAT slot:    0x23E1A8
// Slot symbol:     off_23E1A8
// Target type:     <no type info>
// ============================================================

void .mysql_errno(/* see target signature */)
{
    // Tail-call to mysql_errno via GOT/IAT indirection
    return mysql_errno(/* forwarded args */);
}


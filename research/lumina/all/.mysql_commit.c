// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199F0
// Name:            .mysql_commit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199F0 jmp     cs:off_23E4E0
//
// Resolved target: mysql_commit
// Target address:  0x244078
// GOT/IAT slot:    0x23E4E0
// Slot symbol:     off_23E4E0
// Target type:     <no type info>
// ============================================================

void .mysql_commit(/* see target signature */)
{
    // Tail-call to mysql_commit via GOT/IAT indirection
    return mysql_commit(/* forwarded args */);
}


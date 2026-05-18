// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19F00
// Name:            .mysql_free_result
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19F00 jmp     cs:off_23E768
//
// Resolved target: mysql_free_result
// Target address:  0x244350
// GOT/IAT slot:    0x23E768
// Slot symbol:     off_23E768
// Target type:     <no type info>
// ============================================================

void .mysql_free_result(/* see target signature */)
{
    // Tail-call to mysql_free_result via GOT/IAT indirection
    return mysql_free_result(/* forwarded args */);
}


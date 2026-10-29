// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19880
// Name:            .mysql_server_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19880 jmp     cs:off_23E428
//
// Resolved target: mysql_server_end
// Target address:  0x243FB0
// GOT/IAT slot:    0x23E428
// Slot symbol:     off_23E428
// Target type:     <no type info>
// ============================================================

void .mysql_server_end(/* see target signature */)
{
    // Tail-call to mysql_server_end via GOT/IAT indirection
    return mysql_server_end(/* forwarded args */);
}


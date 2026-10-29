// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196F0
// Name:            .mysql_server_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196F0 jmp     cs:off_23E360
//
// Resolved target: mysql_server_init
// Target address:  0x243EE8
// GOT/IAT slot:    0x23E360
// Slot symbol:     off_23E360
// Target type:     <no type info>
// ============================================================

void .mysql_server_init(/* see target signature */)
{
    // Tail-call to mysql_server_init via GOT/IAT indirection
    return mysql_server_init(/* forwarded args */);
}


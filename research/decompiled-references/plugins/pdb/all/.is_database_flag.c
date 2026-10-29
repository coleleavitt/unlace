// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D470
// Name:            .is_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D470 jmp     cs:off_B3220
//
// Resolved target: is_database_flag
// Target address:  0xB39C0
// GOT/IAT slot:    0xB3220
// Slot symbol:     off_B3220
// Target type:     <no type info>
// ============================================================

void .is_database_flag(/* see target signature */)
{
    // Tail-call to is_database_flag via GOT/IAT indirection
    return is_database_flag(/* forwarded args */);
}


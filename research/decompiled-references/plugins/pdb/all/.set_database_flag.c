// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB70
// Name:            .set_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB70 jmp     cs:off_B35A0
//
// Resolved target: set_database_flag
// Target address:  0xB3D70
// GOT/IAT slot:    0xB35A0
// Slot symbol:     off_B35A0
// Target type:     <no type info>
// ============================================================

void .set_database_flag(/* see target signature */)
{
    // Tail-call to set_database_flag via GOT/IAT indirection
    return set_database_flag(/* forwarded args */);
}


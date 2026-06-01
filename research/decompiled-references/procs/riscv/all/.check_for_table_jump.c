// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8B0
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8B0 jmp     cs:off_35440
//
// Resolved target: check_for_table_jump
// Target address:  0x35AA0
// GOT/IAT slot:    0x35440
// Slot symbol:     off_35440
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


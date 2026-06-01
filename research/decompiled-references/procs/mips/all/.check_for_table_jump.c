// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B90
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B90 jmp     cs:off_755B0
//
// Resolved target: check_for_table_jump
// Target address:  0x75E10
// GOT/IAT slot:    0x755B0
// Slot symbol:     off_755B0
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


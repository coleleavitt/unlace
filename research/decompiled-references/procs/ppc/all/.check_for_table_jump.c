// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CF0
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CF0 jmp     cs:off_95660
//
// Resolved target: check_for_table_jump
// Target address:  0x960A8
// GOT/IAT slot:    0x95660
// Slot symbol:     off_95660
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


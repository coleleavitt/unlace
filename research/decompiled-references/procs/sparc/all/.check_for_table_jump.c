// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7690
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7690 jmp     cs:off_19330
//
// Resolved target: check_for_table_jump
// Target address:  0x19870
// GOT/IAT slot:    0x19330
// Slot symbol:     off_19330
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


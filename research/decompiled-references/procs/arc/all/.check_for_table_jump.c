// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87B0
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87B0 jmp     cs:off_2A3C0
//
// Resolved target: check_for_table_jump
// Target address:  0x2BDE0
// GOT/IAT slot:    0x2A3C0
// Slot symbol:     off_2A3C0
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}


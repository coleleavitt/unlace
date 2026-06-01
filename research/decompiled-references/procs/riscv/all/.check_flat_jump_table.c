// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA410
// Name:            .check_flat_jump_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA410 jmp     cs:off_351F0
//
// Resolved target: check_flat_jump_table
// Target address:  0x35840
// GOT/IAT slot:    0x351F0
// Slot symbol:     off_351F0
// Target type:     <no type info>
// ============================================================

void .check_flat_jump_table(/* see target signature */)
{
    // Tail-call to check_flat_jump_table via GOT/IAT indirection
    return check_flat_jump_table(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84D0
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84D0 jmp     cs:off_2A250
//
// Resolved target: create_switch_table
// Target address:  0x2A7C0
// GOT/IAT slot:    0x2A250
// Slot symbol:     off_2A250
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}


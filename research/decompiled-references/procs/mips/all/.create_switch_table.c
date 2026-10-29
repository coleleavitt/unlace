// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198B0
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198B0 jmp     cs:off_75440
//
// Resolved target: create_switch_table
// Target address:  0x75C90
// GOT/IAT slot:    0x75440
// Slot symbol:     off_75440
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}


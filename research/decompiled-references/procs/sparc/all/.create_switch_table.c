// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7500
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7500 jmp     cs:off_19268
//
// Resolved target: create_switch_table
// Target address:  0x19798
// GOT/IAT slot:    0x19268
// Slot symbol:     off_19268
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}


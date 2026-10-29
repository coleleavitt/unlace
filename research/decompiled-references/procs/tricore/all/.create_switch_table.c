// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6550
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6550 jmp     cs:off_24290
//
// Resolved target: create_switch_table
// Target address:  0x26060
// GOT/IAT slot:    0x24290
// Slot symbol:     off_24290
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}


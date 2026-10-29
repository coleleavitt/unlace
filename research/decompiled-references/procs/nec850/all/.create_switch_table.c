// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9640
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9640 jmp     cs:off_2E308
//
// Resolved target: create_switch_table
// Target address:  0x2E978
// GOT/IAT slot:    0x2E308
// Slot symbol:     off_2E308
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}


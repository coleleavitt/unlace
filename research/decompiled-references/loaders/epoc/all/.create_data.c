// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_13178
//
// Resolved target: create_data
// Target address:  0x13868
// GOT/IAT slot:    0x13178
// Slot symbol:     off_13178
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20280
// Name:            .create_16bit_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20280 jmp     cs:off_95128
//
// Resolved target: create_16bit_data
// Target address:  0x95B60
// GOT/IAT slot:    0x95128
// Slot symbol:     off_95128
// Target type:     <no type info>
// ============================================================

void .create_16bit_data(/* see target signature */)
{
    // Tail-call to create_16bit_data via GOT/IAT indirection
    return create_16bit_data(/* forwarded args */);
}


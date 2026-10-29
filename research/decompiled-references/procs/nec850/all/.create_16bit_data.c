// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9180
// Name:            .create_16bit_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9180 jmp     cs:off_2E0A8
//
// Resolved target: create_16bit_data
// Target address:  0x2E718
// GOT/IAT slot:    0x2E0A8
// Slot symbol:     off_2E0A8
// Target type:     <no type info>
// ============================================================

void .create_16bit_data(/* see target signature */)
{
    // Tail-call to create_16bit_data via GOT/IAT indirection
    return create_16bit_data(/* forwarded args */);
}


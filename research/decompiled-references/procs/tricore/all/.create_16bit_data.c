// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6140
// Name:            .create_16bit_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6140 jmp     cs:off_24088
//
// Resolved target: create_16bit_data
// Target address:  0x25E58
// GOT/IAT slot:    0x24088
// Slot symbol:     off_24088
// Target type:     <no type info>
// ============================================================

void .create_16bit_data(/* see target signature */)
{
    // Tail-call to create_16bit_data via GOT/IAT indirection
    return create_16bit_data(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D690
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D690 jmp     cs:off_B3330
//
// Resolved target: create_data
// Target address:  0xB3AD0
// GOT/IAT slot:    0xB3330
// Slot symbol:     off_B3330
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


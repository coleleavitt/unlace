// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_B128
//
// Resolved target: create_data
// Target address:  0xB3D0
// GOT/IAT slot:    0xB128
// Slot symbol:     off_B128
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


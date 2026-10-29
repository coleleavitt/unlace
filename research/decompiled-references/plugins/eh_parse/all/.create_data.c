// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65D0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65D0 jmp     cs:off_2F2D0
//
// Resolved target: create_data
// Target address:  0x2F940
// GOT/IAT slot:    0x2F2D0
// Slot symbol:     off_2F2D0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


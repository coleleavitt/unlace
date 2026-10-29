// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9610
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9610 jmp     cs:off_892F0
//
// Resolved target: create_data
// Target address:  0x8C5F8
// GOT/IAT slot:    0x892F0
// Slot symbol:     off_892F0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


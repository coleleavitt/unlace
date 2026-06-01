// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44D0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44D0 jmp     cs:off_28250
//
// Resolved target: create_data
// Target address:  0x29BE8
// GOT/IAT slot:    0x28250
// Slot symbol:     off_28250
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


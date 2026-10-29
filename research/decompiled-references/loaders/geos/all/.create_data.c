// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_8138
//
// Resolved target: create_data
// Target address:  0x8398
// GOT/IAT slot:    0x8138
// Slot symbol:     off_8138
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


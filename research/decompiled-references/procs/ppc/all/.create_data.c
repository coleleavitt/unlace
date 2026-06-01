// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20900
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20900 jmp     cs:off_95468
//
// Resolved target: create_data
// Target address:  0x95EA0
// GOT/IAT slot:    0x95468
// Slot symbol:     off_95468
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


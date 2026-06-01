// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33F0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33F0 jmp     cs:off_131E0
//
// Resolved target: create_data
// Target address:  0x13560
// GOT/IAT slot:    0x131E0
// Slot symbol:     off_131E0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


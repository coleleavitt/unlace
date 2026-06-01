// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_7068
//
// Resolved target: create_data
// Target address:  0x7160
// GOT/IAT slot:    0x7068
// Slot symbol:     off_7068
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


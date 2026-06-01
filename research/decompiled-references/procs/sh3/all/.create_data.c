// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5450
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5450 jmp     cs:off_15210
//
// Resolved target: create_data
// Target address:  0x162A0
// GOT/IAT slot:    0x15210
// Slot symbol:     off_15210
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


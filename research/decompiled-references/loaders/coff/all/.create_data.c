// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4480
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4480 jmp     cs:off_23228
//
// Resolved target: create_data
// Target address:  0x23648
// GOT/IAT slot:    0x23228
// Slot symbol:     off_23228
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


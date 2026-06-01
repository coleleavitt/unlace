// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64F0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64F0 jmp     cs:off_24260
//
// Resolved target: create_data
// Target address:  0x26030
// GOT/IAT slot:    0x24260
// Slot symbol:     off_24260
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


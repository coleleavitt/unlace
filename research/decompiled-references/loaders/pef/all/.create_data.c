// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_80F0
//
// Resolved target: create_data
// Target address:  0x82E0
// GOT/IAT slot:    0x80F0
// Slot symbol:     off_80F0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}


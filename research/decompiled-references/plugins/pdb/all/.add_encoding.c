// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D870
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D870 jmp     cs:off_B3420
//
// Resolved target: add_encoding
// Target address:  0xB3BC8
// GOT/IAT slot:    0xB3420
// Slot symbol:     off_B3420
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}


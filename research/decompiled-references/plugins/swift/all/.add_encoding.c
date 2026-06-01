// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45B0
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45B0 jmp     cs:off_282C0
//
// Resolved target: add_encoding
// Target address:  0x29C60
// GOT/IAT slot:    0x282C0
// Slot symbol:     off_282C0
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}


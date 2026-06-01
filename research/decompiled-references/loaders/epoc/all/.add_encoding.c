// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_131B8
//
// Resolved target: add_encoding
// Target address:  0x138B0
// GOT/IAT slot:    0x131B8
// Slot symbol:     off_131B8
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}


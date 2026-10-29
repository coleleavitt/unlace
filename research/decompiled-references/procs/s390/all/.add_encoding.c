// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10260
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10260 jmp     cs:off_2E118
//
// Resolved target: add_encoding
// Target address:  0x36D98
// GOT/IAT slot:    0x2E118
// Slot symbol:     off_2E118
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}


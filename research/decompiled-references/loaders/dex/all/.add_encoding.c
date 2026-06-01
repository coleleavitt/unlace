// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3590
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3590 jmp     cs:off_282B0
//
// Resolved target: add_encoding
// Target address:  0x28768
// GOT/IAT slot:    0x282B0
// Slot symbol:     off_282B0
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}


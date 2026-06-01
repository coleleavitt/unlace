// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9280
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9280 jmp     cs:off_89128
//
// Resolved target: put_byte
// Target address:  0x8C428
// GOT/IAT slot:    0x89128
// Slot symbol:     off_89128
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}


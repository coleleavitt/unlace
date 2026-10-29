// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25C0
// Name:            .next_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x25C0 jmp     cs:off_B2C8
//
// Resolved target: next_addr
// Target address:  0xB780
// GOT/IAT slot:    0xB2C8
// Slot symbol:     off_B2C8
// Target type:     <no type info>
// ============================================================

void .next_addr(/* see target signature */)
{
    // Tail-call to next_addr via GOT/IAT indirection
    return next_addr(/* forwarded args */);
}


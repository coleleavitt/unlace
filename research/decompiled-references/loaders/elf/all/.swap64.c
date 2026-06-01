// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9620
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9620 jmp     cs:off_892F8
//
// Resolved target: swap64
// Target address:  0x8C600
// GOT/IAT slot:    0x892F8
// Slot symbol:     off_892F8
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}


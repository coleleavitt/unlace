// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA750
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA750 jmp     cs:off_CA390
//
// Resolved target: swap64
// Target address:  0xD0CC8
// GOT/IAT slot:    0xCA390
// Slot symbol:     off_CA390
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}


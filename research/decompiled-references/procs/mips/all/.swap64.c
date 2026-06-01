// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197D0
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197D0 jmp     cs:off_753D0
//
// Resolved target: swap64
// Target address:  0x75C20
// GOT/IAT slot:    0x753D0
// Slot symbol:     off_753D0
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}


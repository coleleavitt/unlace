// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3400
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3400 jmp     cs:off_131E8
//
// Resolved target: swap64
// Target address:  0x13568
// GOT/IAT slot:    0x131E8
// Slot symbol:     off_131E8
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}


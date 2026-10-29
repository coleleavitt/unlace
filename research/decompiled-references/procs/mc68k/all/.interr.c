// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6190
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6190 jmp     cs:off_1D0B0
//
// Resolved target: interr
// Target address:  0x1D5A0
// GOT/IAT slot:    0x1D0B0
// Slot symbol:     off_1D0B0
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


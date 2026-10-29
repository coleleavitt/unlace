// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_20098
//
// Resolved target: interr
// Target address:  0x219A8
// GOT/IAT slot:    0x20098
// Slot symbol:     off_20098
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61E0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61E0 jmp     cs:off_2D0D8
//
// Resolved target: interr
// Target address:  0x2D5D8
// GOT/IAT slot:    0x2D0D8
// Slot symbol:     off_2D0D8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


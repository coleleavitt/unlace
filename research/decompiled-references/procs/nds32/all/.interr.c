// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81D0 jmp     cs:off_2A0D0
//
// Resolved target: interr
// Target address:  0x2A640
// GOT/IAT slot:    0x2A0D0
// Slot symbol:     off_2A0D0
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


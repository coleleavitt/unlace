// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9250
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9250 jmp     cs:off_89110
//
// Resolved target: interr
// Target address:  0x8C410
// GOT/IAT slot:    0x89110
// Slot symbol:     off_89110
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


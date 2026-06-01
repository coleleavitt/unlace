// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16EF0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16EF0 jmp     cs:off_4F760
//
// Resolved target: interr
// Target address:  0x50B20
// GOT/IAT slot:    0x4F760
// Slot symbol:     off_4F760
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


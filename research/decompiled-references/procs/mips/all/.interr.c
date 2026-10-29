// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192A0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192A0 jmp     cs:off_75138
//
// Resolved target: interr
// Target address:  0x75988
// GOT/IAT slot:    0x75138
// Slot symbol:     off_75138
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


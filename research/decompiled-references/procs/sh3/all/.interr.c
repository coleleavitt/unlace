// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5160
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5160 jmp     cs:off_15098
//
// Resolved target: interr
// Target address:  0x16128
// GOT/IAT slot:    0x15098
// Slot symbol:     off_15098
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


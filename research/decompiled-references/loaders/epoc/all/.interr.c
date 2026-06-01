// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3140 jmp     cs:off_13088
//
// Resolved target: interr
// Target address:  0x13770
// GOT/IAT slot:    0x13088
// Slot symbol:     off_13088
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


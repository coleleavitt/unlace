// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_8060
//
// Resolved target: interr
// Target address:  0x8220
// GOT/IAT slot:    0x8060
// Slot symbol:     off_8060
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


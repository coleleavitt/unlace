// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41A0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41A0 jmp     cs:off_230B8
//
// Resolved target: interr
// Target address:  0x234D8
// GOT/IAT slot:    0x230B8
// Slot symbol:     off_230B8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


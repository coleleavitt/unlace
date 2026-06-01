// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_140A8
//
// Resolved target: interr
// Target address:  0x14690
// GOT/IAT slot:    0x140A8
// Slot symbol:     off_140A8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


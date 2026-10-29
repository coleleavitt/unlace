// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6200
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6200 jmp     cs:off_2F0E8
//
// Resolved target: interr
// Target address:  0x2F758
// GOT/IAT slot:    0x2F0E8
// Slot symbol:     off_2F0E8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4240
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4240 jmp     cs:off_4E108
//
// Resolved target: interr
// Target address:  0x4F710
// GOT/IAT slot:    0x4E108
// Slot symbol:     off_4E108
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61C0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61C0 jmp     cs:off_8D0C8
//
// Resolved target: interr
// Target address:  0x8D648
// GOT/IAT slot:    0x8D0C8
// Slot symbol:     off_8D0C8
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


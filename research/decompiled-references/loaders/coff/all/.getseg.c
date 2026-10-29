// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4340
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4340 jmp     cs:off_23188
//
// Resolved target: getseg
// Target address:  0x235A8
// GOT/IAT slot:    0x23188
// Slot symbol:     off_23188
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


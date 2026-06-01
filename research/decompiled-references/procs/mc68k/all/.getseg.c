// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62F0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62F0 jmp     cs:off_1D160
//
// Resolved target: getseg
// Target address:  0x1D650
// GOT/IAT slot:    0x1D160
// Slot symbol:     off_1D160
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


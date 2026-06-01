// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6310
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6310 jmp     cs:off_2D170
//
// Resolved target: getseg
// Target address:  0x2D670
// GOT/IAT slot:    0x2D170
// Slot symbol:     off_2D170
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


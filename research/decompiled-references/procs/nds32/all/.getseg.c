// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82F0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82F0 jmp     cs:off_2A160
//
// Resolved target: getseg
// Target address:  0x2A6D0
// GOT/IAT slot:    0x2A160
// Slot symbol:     off_2A160
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


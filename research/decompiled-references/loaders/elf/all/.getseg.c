// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9490
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9490 jmp     cs:off_89230
//
// Resolved target: getseg
// Target address:  0x8C538
// GOT/IAT slot:    0x89230
// Slot symbol:     off_89230
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


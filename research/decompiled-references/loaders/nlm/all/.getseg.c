// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_8088
//
// Resolved target: getseg
// Target address:  0x8768
// GOT/IAT slot:    0x8088
// Slot symbol:     off_8088
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


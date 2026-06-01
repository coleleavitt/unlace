// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_70A8
//
// Resolved target: getseg
// Target address:  0x7260
// GOT/IAT slot:    0x70A8
// Slot symbol:     off_70A8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


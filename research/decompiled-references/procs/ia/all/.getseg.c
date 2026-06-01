// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7190
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7190 jmp     cs:off_260B0
//
// Resolved target: getseg
// Target address:  0x26368
// GOT/IAT slot:    0x260B0
// Slot symbol:     off_260B0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


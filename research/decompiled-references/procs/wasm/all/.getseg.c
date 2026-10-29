// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91B0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91B0 jmp     cs:off_260C0
//
// Resolved target: getseg
// Target address:  0x263D0
// GOT/IAT slot:    0x260C0
// Slot symbol:     off_260C0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


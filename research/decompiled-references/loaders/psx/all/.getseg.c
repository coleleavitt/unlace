// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_A0B0
//
// Resolved target: getseg
// Target address:  0xA360
// GOT/IAT slot:    0xA0B0
// Slot symbol:     off_A0B0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


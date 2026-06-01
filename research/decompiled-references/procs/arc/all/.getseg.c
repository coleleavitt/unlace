// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8370
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8370 jmp     cs:off_2A1A0
//
// Resolved target: getseg
// Target address:  0x2BBB0
// GOT/IAT slot:    0x2A1A0
// Slot symbol:     off_2A1A0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


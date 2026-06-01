// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_6070
//
// Resolved target: getseg
// Target address:  0x61F8
// GOT/IAT slot:    0x6070
// Slot symbol:     off_6070
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


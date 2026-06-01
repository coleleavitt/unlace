// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20650
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20650 jmp     cs:off_95310
//
// Resolved target: getseg
// Target address:  0x95D48
// GOT/IAT slot:    0x95310
// Slot symbol:     off_95310
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


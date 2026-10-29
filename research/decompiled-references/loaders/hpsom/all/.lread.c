// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_50B0
//
// Resolved target: lread
// Target address:  0x5250
// GOT/IAT slot:    0x50B0
// Slot symbol:     off_50B0
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


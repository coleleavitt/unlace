// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_60B0
//
// Resolved target: lread
// Target address:  0x6238
// GOT/IAT slot:    0x60B0
// Slot symbol:     off_60B0
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


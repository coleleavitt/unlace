// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2410
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2410 jmp     cs:off_B1F0
//
// Resolved target: lread
// Target address:  0xB688
// GOT/IAT slot:    0xB1F0
// Slot symbol:     off_B1F0
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


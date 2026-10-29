// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_B160
//
// Resolved target: lread
// Target address:  0xB3F8
// GOT/IAT slot:    0xB160
// Slot symbol:     off_B160
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_5090
//
// Resolved target: lread
// Target address:  0x51D0
// GOT/IAT slot:    0x5090
// Slot symbol:     off_5090
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_4098
//
// Resolved target: lread
// Target address:  0x41B0
// GOT/IAT slot:    0x4098
// Slot symbol:     off_4098
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


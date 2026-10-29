// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_4078
//
// Resolved target: lread
// Target address:  0x41A0
// GOT/IAT slot:    0x4078
// Slot symbol:     off_4078
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


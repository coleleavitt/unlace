// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_4070
//
// Resolved target: lread
// Target address:  0x4148
// GOT/IAT slot:    0x4070
// Slot symbol:     off_4070
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


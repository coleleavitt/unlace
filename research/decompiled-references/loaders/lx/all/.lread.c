// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_B158
//
// Resolved target: lread
// Target address:  0xB400
// GOT/IAT slot:    0xB158
// Slot symbol:     off_B158
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_70F8
//
// Resolved target: lread
// Target address:  0x72B0
// GOT/IAT slot:    0x70F8
// Slot symbol:     off_70F8
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}


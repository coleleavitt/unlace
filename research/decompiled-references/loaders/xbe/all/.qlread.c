// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_5070
//
// Resolved target: qlread
// Target address:  0x51D0
// GOT/IAT slot:    0x5070
// Slot symbol:     off_5070
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


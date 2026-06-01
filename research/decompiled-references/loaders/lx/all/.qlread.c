// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_B120
//
// Resolved target: qlread
// Target address:  0xB3C8
// GOT/IAT slot:    0xB120
// Slot symbol:     off_B120
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


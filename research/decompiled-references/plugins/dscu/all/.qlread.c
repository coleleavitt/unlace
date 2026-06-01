// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42B0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42B0 jmp     cs:off_1F140
//
// Resolved target: qlread
// Target address:  0x1F3F0
// GOT/IAT slot:    0x1F140
// Slot symbol:     off_1F140
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


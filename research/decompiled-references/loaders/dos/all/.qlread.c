// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_B1A8
//
// Resolved target: qlread
// Target address:  0xB640
// GOT/IAT slot:    0xB1A8
// Slot symbol:     off_B1A8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


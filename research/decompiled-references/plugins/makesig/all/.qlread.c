// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_201B0
//
// Resolved target: qlread
// Target address:  0x21AD0
// GOT/IAT slot:    0x201B0
// Slot symbol:     off_201B0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


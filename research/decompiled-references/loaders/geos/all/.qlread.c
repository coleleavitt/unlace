// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_8130
//
// Resolved target: qlread
// Target address:  0x8390
// GOT/IAT slot:    0x8130
// Slot symbol:     off_8130
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


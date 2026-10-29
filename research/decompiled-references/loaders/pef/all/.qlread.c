// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_80E8
//
// Resolved target: qlread
// Target address:  0x82D8
// GOT/IAT slot:    0x80E8
// Slot symbol:     off_80E8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_6098
//
// Resolved target: qlread
// Target address:  0x6220
// GOT/IAT slot:    0x6098
// Slot symbol:     off_6098
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


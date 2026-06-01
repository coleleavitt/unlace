// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3470
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3470 jmp     cs:off_28220
//
// Resolved target: qlread
// Target address:  0x286D0
// GOT/IAT slot:    0x28220
// Slot symbol:     off_28220
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


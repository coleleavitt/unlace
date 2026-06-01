// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_A0E0
//
// Resolved target: qlread
// Target address:  0xA390
// GOT/IAT slot:    0xA0E0
// Slot symbol:     off_A0E0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


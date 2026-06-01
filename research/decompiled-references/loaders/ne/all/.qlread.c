// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_B128
//
// Resolved target: qlread
// Target address:  0xB3C0
// GOT/IAT slot:    0xB128
// Slot symbol:     off_B128
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


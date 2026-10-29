// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .qlseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_B0B0
//
// Resolved target: qlseek
// Target address:  0xB348
// GOT/IAT slot:    0xB0B0
// Slot symbol:     off_B0B0
// Target type:     <no type info>
// ============================================================

void .qlseek(/* see target signature */)
{
    // Tail-call to qlseek via GOT/IAT indirection
    return qlseek(/* forwarded args */);
}


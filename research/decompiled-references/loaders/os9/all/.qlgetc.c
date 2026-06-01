// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_40B0
//
// Resolved target: qlgetc
// Target address:  0x41D0
// GOT/IAT slot:    0x40B0
// Slot symbol:     off_40B0
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}


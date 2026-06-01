// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_8128
//
// Resolved target: qlgetc
// Target address:  0x8818
// GOT/IAT slot:    0x8128
// Slot symbol:     off_8128
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34E0
// Name:            .qlgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34E0 jmp     cs:off_14258
//
// Resolved target: qlgetc
// Target address:  0x14860
// GOT/IAT slot:    0x14258
// Slot symbol:     off_14258
// Target type:     <no type info>
// ============================================================

void .qlgetc(/* see target signature */)
{
    // Tail-call to qlgetc via GOT/IAT indirection
    return qlgetc(/* forwarded args */);
}


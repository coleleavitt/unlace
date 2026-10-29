// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_150B8
//
// Resolved target: qlread
// Target address:  0x152A8
// GOT/IAT slot:    0x150B8
// Slot symbol:     off_150B8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D980
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D980 jmp     cs:off_B34A8
//
// Resolved target: qfread
// Target address:  0xB3C60
// GOT/IAT slot:    0xB34A8
// Slot symbol:     off_B34A8
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}


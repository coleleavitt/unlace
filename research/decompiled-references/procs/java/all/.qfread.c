// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6620
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6620 jmp     cs:off_2D2F8
//
// Resolved target: qfread
// Target address:  0x2D808
// GOT/IAT slot:    0x2D2F8
// Slot symbol:     off_2D2F8
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}


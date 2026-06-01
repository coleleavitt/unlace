// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2B0
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2B0 jmp     cs:off_B3140
//
// Resolved target: qstrupr
// Target address:  0xB38C8
// GOT/IAT slot:    0xB3140
// Slot symbol:     off_B3140
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}


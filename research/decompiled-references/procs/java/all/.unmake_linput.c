// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65F0
// Name:            .unmake_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65F0 jmp     cs:off_2D2E0
//
// Resolved target: unmake_linput
// Target address:  0x2D7F0
// GOT/IAT slot:    0x2D2E0
// Slot symbol:     off_2D2E0
// Target type:     <no type info>
// ============================================================

void .unmake_linput(/* see target signature */)
{
    // Tail-call to unmake_linput via GOT/IAT indirection
    return unmake_linput(/* forwarded args */);
}


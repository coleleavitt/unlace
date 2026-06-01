// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D370
// Name:            .qgetline
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D370 jmp     cs:off_B31A0
//
// Resolved target: qgetline
// Target address:  0xB3938
// GOT/IAT slot:    0xB31A0
// Slot symbol:     off_B31A0
// Target type:     <no type info>
// ============================================================

void .qgetline(/* see target signature */)
{
    // Tail-call to qgetline via GOT/IAT indirection
    return qgetline(/* forwarded args */);
}


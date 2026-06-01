// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63F0
// Name:            .qfsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63F0 jmp     cs:off_2D1E0
//
// Resolved target: qfsize
// Target address:  0x2D6E0
// GOT/IAT slot:    0x2D1E0
// Slot symbol:     off_2D1E0
// Target type:     <no type info>
// ============================================================

void .qfsize(/* see target signature */)
{
    // Tail-call to qfsize via GOT/IAT indirection
    return qfsize(/* forwarded args */);
}


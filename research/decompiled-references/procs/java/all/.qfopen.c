// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6640
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6640 jmp     cs:off_2D308
//
// Resolved target: qfopen
// Target address:  0x2D818
// GOT/IAT slot:    0x2D308
// Slot symbol:     off_2D308
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}


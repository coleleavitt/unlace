// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_80F8
//
// Resolved target: qalloc
// Target address:  0x8358
// GOT/IAT slot:    0x80F8
// Slot symbol:     off_80F8
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


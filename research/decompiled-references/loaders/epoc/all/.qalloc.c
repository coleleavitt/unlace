// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_13128
//
// Resolved target: qalloc
// Target address:  0x13818
// GOT/IAT slot:    0x13128
// Slot symbol:     off_13128
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


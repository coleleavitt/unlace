// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3510
// Name:            .qregcomp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3510 jmp     cs:off_20270
//
// Resolved target: qregcomp
// Target address:  0x21BA0
// GOT/IAT slot:    0x20270
// Slot symbol:     off_20270
// Target type:     <no type info>
// ============================================================

void .qregcomp(/* see target signature */)
{
    // Tail-call to qregcomp via GOT/IAT indirection
    return qregcomp(/* forwarded args */);
}


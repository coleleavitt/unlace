// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_7038
//
// Resolved target: qcalloc
// Target address:  0x71F0
// GOT/IAT slot:    0x7038
// Slot symbol:     off_7038
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


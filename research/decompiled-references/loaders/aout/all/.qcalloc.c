// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_6020
//
// Resolved target: qcalloc
// Target address:  0x61A8
// GOT/IAT slot:    0x6020
// Slot symbol:     off_6020
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


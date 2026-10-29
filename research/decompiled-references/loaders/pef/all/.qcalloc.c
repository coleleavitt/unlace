// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_8028
//
// Resolved target: qcalloc
// Target address:  0x8218
// GOT/IAT slot:    0x8028
// Slot symbol:     off_8028
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


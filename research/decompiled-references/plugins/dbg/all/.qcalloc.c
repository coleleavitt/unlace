// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C0
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30C0 jmp     cs:off_13048
//
// Resolved target: qcalloc
// Target address:  0x133C0
// GOT/IAT slot:    0x13048
// Slot symbol:     off_13048
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


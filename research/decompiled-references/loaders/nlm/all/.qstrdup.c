// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_8030
//
// Resolved target: qstrdup
// Target address:  0x8710
// GOT/IAT slot:    0x8030
// Slot symbol:     off_8030
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}


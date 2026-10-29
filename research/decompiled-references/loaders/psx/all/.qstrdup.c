// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_A030
//
// Resolved target: qstrdup
// Target address:  0xA2E0
// GOT/IAT slot:    0xA030
// Slot symbol:     off_A030
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}


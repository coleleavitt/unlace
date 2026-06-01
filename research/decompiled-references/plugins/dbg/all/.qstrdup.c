// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30F0
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30F0 jmp     cs:off_13060
//
// Resolved target: qstrdup
// Target address:  0x133D8
// GOT/IAT slot:    0x13060
// Slot symbol:     off_13060
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}


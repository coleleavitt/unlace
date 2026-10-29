// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_20078
//
// Resolved target: qstrdup
// Target address:  0x21988
// GOT/IAT slot:    0x20078
// Slot symbol:     off_20078
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}


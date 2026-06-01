// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA10
// Name:            .qvprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA10 jmp     cs:off_CA4F0
//
// Resolved target: qvprintf
// Target address:  0xD0E38
// GOT/IAT slot:    0xCA4F0
// Slot symbol:     off_CA4F0
// Target type:     <no type info>
// ============================================================

void .qvprintf(/* see target signature */)
{
    // Tail-call to qvprintf via GOT/IAT indirection
    return qvprintf(/* forwarded args */);
}


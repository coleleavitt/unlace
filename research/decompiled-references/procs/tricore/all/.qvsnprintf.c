// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65D0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65D0 jmp     cs:off_242D0
//
// Resolved target: qvsnprintf
// Target address:  0x260A0
// GOT/IAT slot:    0x242D0
// Slot symbol:     off_242D0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


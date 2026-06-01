// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8550
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8550 jmp     cs:off_2A290
//
// Resolved target: qvsnprintf
// Target address:  0x2A800
// GOT/IAT slot:    0x2A290
// Slot symbol:     off_2A290
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


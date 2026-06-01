// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D860
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D860 jmp     cs:off_B3418
//
// Resolved target: qvsnprintf
// Target address:  0xB3BB8
// GOT/IAT slot:    0xB3418
// Slot symbol:     off_B3418
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


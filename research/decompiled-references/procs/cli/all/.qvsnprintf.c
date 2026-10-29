// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_1A138
//
// Resolved target: qvsnprintf
// Target address:  0x1A3F0
// GOT/IAT slot:    0x1A138
// Slot symbol:     off_1A138
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


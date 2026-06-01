// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4340
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4340 jmp     cs:off_1F188
//
// Resolved target: qvsnprintf
// Target address:  0x1F438
// GOT/IAT slot:    0x1F188
// Slot symbol:     off_1F188
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


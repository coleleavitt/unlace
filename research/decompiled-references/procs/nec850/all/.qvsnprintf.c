// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96A0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96A0 jmp     cs:off_2E338
//
// Resolved target: qvsnprintf
// Target address:  0x2E9A8
// GOT/IAT slot:    0x2E338
// Slot symbol:     off_2E338
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


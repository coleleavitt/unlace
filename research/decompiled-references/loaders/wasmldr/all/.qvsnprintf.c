// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_150F0
//
// Resolved target: qvsnprintf
// Target address:  0x152E0
// GOT/IAT slot:    0x150F0
// Slot symbol:     off_150F0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


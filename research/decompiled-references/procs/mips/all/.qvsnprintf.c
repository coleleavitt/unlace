// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19940
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19940 jmp     cs:off_75488
//
// Resolved target: qvsnprintf
// Target address:  0x75CD8
// GOT/IAT slot:    0x75488
// Slot symbol:     off_75488
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


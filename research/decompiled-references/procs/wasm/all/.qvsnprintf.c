// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92E0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92E0 jmp     cs:off_26158
//
// Resolved target: qvsnprintf
// Target address:  0x26468
// GOT/IAT slot:    0x26158
// Slot symbol:     off_26158
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


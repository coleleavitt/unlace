// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA910
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA910 jmp     cs:off_CA470
//
// Resolved target: qvsnprintf
// Target address:  0xD0DB0
// GOT/IAT slot:    0xCA470
// Slot symbol:     off_CA470
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


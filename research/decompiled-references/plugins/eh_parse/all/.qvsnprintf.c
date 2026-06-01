// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66F0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66F0 jmp     cs:off_2F360
//
// Resolved target: qvsnprintf
// Target address:  0x2F9D0
// GOT/IAT slot:    0x2F360
// Slot symbol:     off_2F360
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


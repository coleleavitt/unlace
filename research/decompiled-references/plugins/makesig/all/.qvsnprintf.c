// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_20208
//
// Resolved target: qvsnprintf
// Target address:  0x21B28
// GOT/IAT slot:    0x20208
// Slot symbol:     off_20208
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


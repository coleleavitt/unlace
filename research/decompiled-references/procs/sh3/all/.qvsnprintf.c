// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54E0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54E0 jmp     cs:off_15258
//
// Resolved target: qvsnprintf
// Target address:  0x162E8
// GOT/IAT slot:    0x15258
// Slot symbol:     off_15258
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


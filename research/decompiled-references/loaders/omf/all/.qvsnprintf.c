// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3480
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3480 jmp     cs:off_14228
//
// Resolved target: qvsnprintf
// Target address:  0x14820
// GOT/IAT slot:    0x14228
// Slot symbol:     off_14228
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


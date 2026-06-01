// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47A0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47A0 jmp     cs:off_4E3B8
//
// Resolved target: qvsnprintf
// Target address:  0x4F9D0
// GOT/IAT slot:    0x4E3B8
// Slot symbol:     off_4E3B8
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


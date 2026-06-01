// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_131B0
//
// Resolved target: qvsnprintf
// Target address:  0x138A0
// GOT/IAT slot:    0x131B0
// Slot symbol:     off_131B0
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


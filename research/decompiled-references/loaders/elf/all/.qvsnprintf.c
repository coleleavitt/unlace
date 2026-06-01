// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9760
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9760 jmp     cs:off_89398
//
// Resolved target: qvsnprintf
// Target address:  0x8C6A8
// GOT/IAT slot:    0x89398
// Slot symbol:     off_89398
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}


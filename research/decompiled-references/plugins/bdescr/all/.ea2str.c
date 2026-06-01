// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .ea2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_7070
//
// Resolved target: ea2str
// Target address:  0x71A0
// GOT/IAT slot:    0x7070
// Slot symbol:     off_7070
// Target type:     <no type info>
// ============================================================

void .ea2str(/* see target signature */)
{
    // Tail-call to ea2str via GOT/IAT indirection
    return ea2str(/* forwarded args */);
}


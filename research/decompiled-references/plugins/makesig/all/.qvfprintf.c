// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_20008
//
// Resolved target: qvfprintf
// Target address:  0x21918
// GOT/IAT slot:    0x20008
// Slot symbol:     off_20008
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}


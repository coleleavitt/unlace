// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4030
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4030 jmp     cs:off_1F000
//
// Resolved target: qvfprintf
// Target address:  0x1F2B0
// GOT/IAT slot:    0x1F000
// Slot symbol:     off_1F000
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}


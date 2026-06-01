// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA210
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA210 jmp     cs:off_CA0F0
//
// Resolved target: qsscanf
// Target address:  0xD0A20
// GOT/IAT slot:    0xCA0F0
// Slot symbol:     off_CA0F0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


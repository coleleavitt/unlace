// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41F0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41F0 jmp     cs:off_4E0E0
//
// Resolved target: qsscanf
// Target address:  0x4F6E8
// GOT/IAT slot:    0x4E0E0
// Slot symbol:     off_4E0E0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


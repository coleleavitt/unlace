// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202B0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202B0 jmp     cs:off_95140
//
// Resolved target: qsscanf
// Target address:  0x95B78
// GOT/IAT slot:    0x95140
// Slot symbol:     off_95140
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91D0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91D0 jmp     cs:off_890D0
//
// Resolved target: qsscanf
// Target address:  0x8C3D0
// GOT/IAT slot:    0x890D0
// Slot symbol:     off_890D0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


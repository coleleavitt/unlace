// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91B0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91B0 jmp     cs:off_2E0C0
//
// Resolved target: qsscanf
// Target address:  0x2E730
// GOT/IAT slot:    0x2E0C0
// Slot symbol:     off_2E0C0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


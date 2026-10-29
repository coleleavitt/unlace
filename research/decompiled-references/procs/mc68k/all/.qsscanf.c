// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6160
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6160 jmp     cs:off_1D098
//
// Resolved target: qsscanf
// Target address:  0x1D588
// GOT/IAT slot:    0x1D098
// Slot symbol:     off_1D098
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


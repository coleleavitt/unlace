// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30F0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30F0 jmp     cs:off_13060
//
// Resolved target: qsscanf
// Target address:  0x13748
// GOT/IAT slot:    0x13060
// Slot symbol:     off_13060
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}


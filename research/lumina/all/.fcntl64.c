// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C30
// Name:            .fcntl64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C30 jmp     cs:off_23E600
//
// Resolved target: fcntl64
// Target address:  0x2441B0
// GOT/IAT slot:    0x23E600
// Slot symbol:     off_23E600
// Target type:     <no type info>
// ============================================================

void .fcntl64(/* see target signature */)
{
    // Tail-call to fcntl64 via GOT/IAT indirection
    return fcntl64(/* forwarded args */);
}


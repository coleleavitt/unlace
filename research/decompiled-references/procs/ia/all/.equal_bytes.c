// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73F0
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73F0 jmp     cs:off_261E0
//
// Resolved target: equal_bytes
// Target address:  0x264B8
// GOT/IAT slot:    0x261E0
// Slot symbol:     off_261E0
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48B0
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48B0 jmp     cs:off_28440
//
// Resolved target: equal_bytes
// Target address:  0x29E00
// GOT/IAT slot:    0x28440
// Slot symbol:     off_28440
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}


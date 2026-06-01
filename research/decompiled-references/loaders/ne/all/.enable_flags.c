// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .enable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_B1D8
//
// Resolved target: enable_flags
// Target address:  0xB488
// GOT/IAT slot:    0xB1D8
// Slot symbol:     off_B1D8
// Target type:     <no type info>
// ============================================================

void .enable_flags(/* see target signature */)
{
    // Tail-call to enable_flags via GOT/IAT indirection
    return enable_flags(/* forwarded args */);
}


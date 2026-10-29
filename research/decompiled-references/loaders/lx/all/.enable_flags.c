// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .enable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_B1C8
//
// Resolved target: enable_flags
// Target address:  0xB488
// GOT/IAT slot:    0xB1C8
// Slot symbol:     off_B1C8
// Target type:     <no type info>
// ============================================================

void .enable_flags(/* see target signature */)
{
    // Tail-call to enable_flags via GOT/IAT indirection
    return enable_flags(/* forwarded args */);
}


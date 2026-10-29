// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .enable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_8168
//
// Resolved target: enable_flags
// Target address:  0x8358
// GOT/IAT slot:    0x8168
// Slot symbol:     off_8168
// Target type:     <no type info>
// ============================================================

void .enable_flags(/* see target signature */)
{
    // Tail-call to enable_flags via GOT/IAT indirection
    return enable_flags(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .enable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_5100
//
// Resolved target: enable_flags
// Target address:  0x52E8
// GOT/IAT slot:    0x5100
// Slot symbol:     off_5100
// Target type:     <no type info>
// ============================================================

void .enable_flags(/* see target signature */)
{
    // Tail-call to enable_flags via GOT/IAT indirection
    return enable_flags(/* forwarded args */);
}


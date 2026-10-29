// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4330
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4330 jmp     cs:off_28180
//
// Resolved target: log2floor
// Target address:  0x29B18
// GOT/IAT slot:    0x28180
// Slot symbol:     off_28180
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}


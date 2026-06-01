// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_290F8
//
// Resolved target: log2floor
// Target address:  0x294A8
// GOT/IAT slot:    0x290F8
// Slot symbol:     off_290F8
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}


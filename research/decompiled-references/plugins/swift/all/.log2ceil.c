// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42F0
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42F0 jmp     cs:off_28160
//
// Resolved target: log2ceil
// Target address:  0x29AF8
// GOT/IAT slot:    0x28160
// Slot symbol:     off_28160
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}


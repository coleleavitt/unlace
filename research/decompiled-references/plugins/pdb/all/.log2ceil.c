// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D380
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D380 jmp     cs:off_B31A8
//
// Resolved target: log2ceil
// Target address:  0xB3940
// GOT/IAT slot:    0xB31A8
// Slot symbol:     off_B31A8
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}


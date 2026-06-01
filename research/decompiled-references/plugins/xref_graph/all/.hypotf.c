// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16BF0
// Name:            .hypotf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16BF0 jmp     cs:off_4F5E0
//
// Resolved target: hypotf
// Target address:  0x50850
// GOT/IAT slot:    0x4F5E0
// Slot symbol:     off_4F5E0
// Target type:     float(float x, float y)
// ============================================================

/* see target sig */ .hypotf(/* see target signature */)
{
    // Tail-call to hypotf via GOT/IAT indirection
    return hypotf(/* forwarded args */);
}


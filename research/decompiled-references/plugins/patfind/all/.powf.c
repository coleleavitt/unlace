// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .powf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_13158
//
// Resolved target: powf
// Target address:  0x133F8
// GOT/IAT slot:    0x13158
// Slot symbol:     off_13158
// Target type:     float(float x, float y)
// ============================================================

/* see target sig */ .powf(/* see target signature */)
{
    // Tail-call to powf via GOT/IAT indirection
    return powf(/* forwarded args */);
}


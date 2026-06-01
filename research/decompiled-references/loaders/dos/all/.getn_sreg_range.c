// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .getn_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_B058
//
// Resolved target: getn_sreg_range
// Target address:  0xB4F0
// GOT/IAT slot:    0xB058
// Slot symbol:     off_B058
// Target type:     <no type info>
// ============================================================

void .getn_sreg_range(/* see target signature */)
{
    // Tail-call to getn_sreg_range via GOT/IAT indirection
    return getn_sreg_range(/* forwarded args */);
}


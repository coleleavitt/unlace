// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19750
// Name:            .get_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19750 jmp     cs:off_75390
//
// Resolved target: get_sreg_range
// Target address:  0x75BE0
// GOT/IAT slot:    0x75390
// Slot symbol:     off_75390
// Target type:     <no type info>
// ============================================================

void .get_sreg_range(/* see target signature */)
{
    // Tail-call to get_sreg_range via GOT/IAT indirection
    return get_sreg_range(/* forwarded args */);
}


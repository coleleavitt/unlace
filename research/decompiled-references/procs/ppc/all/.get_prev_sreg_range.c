// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20070
// Name:            .get_prev_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20070 jmp     cs:off_95020
//
// Resolved target: get_prev_sreg_range
// Target address:  0x95A50
// GOT/IAT slot:    0x95020
// Slot symbol:     off_95020
// Target type:     <no type info>
// ============================================================

void .get_prev_sreg_range(/* see target signature */)
{
    // Tail-call to get_prev_sreg_range via GOT/IAT indirection
    return get_prev_sreg_range(/* forwarded args */);
}


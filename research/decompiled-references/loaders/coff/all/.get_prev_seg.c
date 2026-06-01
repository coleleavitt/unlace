// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4630
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4630 jmp     cs:off_23300
//
// Resolved target: get_prev_seg
// Target address:  0x23730
// GOT/IAT slot:    0x23300
// Slot symbol:     off_23300
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}


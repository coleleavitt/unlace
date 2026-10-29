// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA380
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA380 jmp     cs:off_CA1A8
//
// Resolved target: get_next_seg
// Target address:  0xD0AD8
// GOT/IAT slot:    0xCA1A8
// Slot symbol:     off_CA1A8
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}


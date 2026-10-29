// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20410
// Name:            .get_next_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20410 jmp     cs:off_951F0
//
// Resolved target: get_next_seg
// Target address:  0x95C28
// GOT/IAT slot:    0x951F0
// Slot symbol:     off_951F0
// Target type:     <no type info>
// ============================================================

void .get_next_seg(/* see target signature */)
{
    // Tail-call to get_next_seg via GOT/IAT indirection
    return get_next_seg(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20330
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20330 jmp     cs:off_95180
//
// Resolved target: get_last_seg
// Target address:  0x95BB8
// GOT/IAT slot:    0x95180
// Slot symbol:     off_95180
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}


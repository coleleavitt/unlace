// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_4018
//
// Resolved target: get_first_seg
// Target address:  0x40F0
// GOT/IAT slot:    0x4018
// Slot symbol:     off_4018
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


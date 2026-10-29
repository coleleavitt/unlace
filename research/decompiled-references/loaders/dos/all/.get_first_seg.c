// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_B068
//
// Resolved target: get_first_seg
// Target address:  0xB500
// GOT/IAT slot:    0xB068
// Slot symbol:     off_B068
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


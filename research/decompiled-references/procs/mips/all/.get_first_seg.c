// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191B0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191B0 jmp     cs:off_750C0
//
// Resolved target: get_first_seg
// Target address:  0x75910
// GOT/IAT slot:    0x750C0
// Slot symbol:     off_750C0
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


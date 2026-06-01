// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_B048
//
// Resolved target: get_first_seg
// Target address:  0xB2E0
// GOT/IAT slot:    0xB048
// Slot symbol:     off_B048
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA180
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA180 jmp     cs:off_350A8
//
// Resolved target: get_first_seg
// Target address:  0x356F8
// GOT/IAT slot:    0x350A8
// Slot symbol:     off_350A8
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


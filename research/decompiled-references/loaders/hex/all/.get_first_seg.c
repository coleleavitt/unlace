// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_5048
//
// Resolved target: get_first_seg
// Target address:  0x5218
// GOT/IAT slot:    0x5048
// Slot symbol:     off_5048
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA210
// Name:            .get_last_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA210 jmp     cs:off_350F0
//
// Resolved target: get_last_seg
// Target address:  0x35740
// GOT/IAT slot:    0x350F0
// Slot symbol:     off_350F0
// Target type:     <no type info>
// ============================================================

void .get_last_seg(/* see target signature */)
{
    // Tail-call to get_last_seg via GOT/IAT indirection
    return get_last_seg(/* forwarded args */);
}


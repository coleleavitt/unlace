// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA630
// Name:            .get_frame_retsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA630 jmp     cs:off_CA300
//
// Resolved target: get_frame_retsize
// Target address:  0xD0C38
// GOT/IAT slot:    0xCA300
// Slot symbol:     off_CA300
// Target type:     <no type info>
// ============================================================

void .get_frame_retsize(/* see target signature */)
{
    // Tail-call to get_frame_retsize via GOT/IAT indirection
    return get_frame_retsize(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83D0
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83D0 jmp     cs:off_2A1D0
//
// Resolved target: set_frame_size
// Target address:  0x2A740
// GOT/IAT slot:    0x2A1D0
// Slot symbol:     off_2A1D0
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207E0
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207E0 jmp     cs:off_953D8
//
// Resolved target: set_frame_size
// Target address:  0x95E10
// GOT/IAT slot:    0x953D8
// Slot symbol:     off_953D8
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19690
// Name:            .set_frame_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19690 jmp     cs:off_75330
//
// Resolved target: set_frame_size
// Target address:  0x75B80
// GOT/IAT slot:    0x75330
// Slot symbol:     off_75330
// Target type:     <no type info>
// ============================================================

void .set_frame_size(/* see target signature */)
{
    // Tail-call to set_frame_size via GOT/IAT indirection
    return set_frame_size(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9150
// Name:            .get_frame_var
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9150 jmp     cs:off_26090
//
// Resolved target: get_frame_var
// Target address:  0x263A0
// GOT/IAT slot:    0x26090
// Slot symbol:     off_26090
// Target type:     <no type info>
// ============================================================

void .get_frame_var(/* see target signature */)
{
    // Tail-call to get_frame_var via GOT/IAT indirection
    return get_frame_var(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8160
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8160 jmp     cs:off_2A098
//
// Resolved target: add_frame
// Target address:  0x2BAA8
// GOT/IAT slot:    0x2A098
// Slot symbol:     off_2A098
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}


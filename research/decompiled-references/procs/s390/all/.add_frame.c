// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x100A0
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x100A0 jmp     cs:off_2E038
//
// Resolved target: add_frame
// Target address:  0x36CB0
// GOT/IAT slot:    0x2E038
// Slot symbol:     off_2E038
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}


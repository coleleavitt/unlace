// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6130
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6130 jmp     cs:off_1D080
//
// Resolved target: add_frame
// Target address:  0x1D570
// GOT/IAT slot:    0x1D080
// Slot symbol:     off_1D080
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}


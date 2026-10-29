// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61E0
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61E0 jmp     cs:off_1D0D8
//
// Resolved target: set_moved_jpt
// Target address:  0x1D5C8
// GOT/IAT slot:    0x1D0D8
// Slot symbol:     off_1D0D8
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}


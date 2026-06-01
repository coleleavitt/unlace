// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10110
// Name:            .set_moved_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10110 jmp     cs:off_2E070
//
// Resolved target: set_moved_jpt
// Target address:  0x36CE8
// GOT/IAT slot:    0x2E070
// Slot symbol:     off_2E070
// Target type:     <no type info>
// ============================================================

void .set_moved_jpt(/* see target signature */)
{
    // Tail-call to set_moved_jpt via GOT/IAT indirection
    return set_moved_jpt(/* forwarded args */);
}


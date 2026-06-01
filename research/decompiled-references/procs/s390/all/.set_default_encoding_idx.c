// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x100B0
// Name:            .set_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x100B0 jmp     cs:off_2E040
//
// Resolved target: set_default_encoding_idx
// Target address:  0x36CB8
// GOT/IAT slot:    0x2E040
// Slot symbol:     off_2E040
// Target type:     <no type info>
// ============================================================

void .set_default_encoding_idx(/* see target signature */)
{
    // Tail-call to set_default_encoding_idx via GOT/IAT indirection
    return set_default_encoding_idx(/* forwarded args */);
}


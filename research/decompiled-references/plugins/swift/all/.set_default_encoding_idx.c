// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4160
// Name:            .set_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4160 jmp     cs:off_28098
//
// Resolved target: set_default_encoding_idx
// Target address:  0x29A30
// GOT/IAT slot:    0x28098
// Slot symbol:     off_28098
// Target type:     <no type info>
// ============================================================

void .set_default_encoding_idx(/* see target signature */)
{
    // Tail-call to set_default_encoding_idx via GOT/IAT indirection
    return set_default_encoding_idx(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40B0
// Name:            .get_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40B0 jmp     cs:off_28040
//
// Resolved target: get_default_encoding_idx
// Target address:  0x299D0
// GOT/IAT slot:    0x28040
// Slot symbol:     off_28040
// Target type:     <no type info>
// ============================================================

void .get_default_encoding_idx(/* see target signature */)
{
    // Tail-call to get_default_encoding_idx via GOT/IAT indirection
    return get_default_encoding_idx(/* forwarded args */);
}


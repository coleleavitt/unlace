// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9740
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9740 jmp     cs:off_2E388
//
// Resolved target: get_fchunk
// Target address:  0x2EA00
// GOT/IAT slot:    0x2E388
// Slot symbol:     off_2E388
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}


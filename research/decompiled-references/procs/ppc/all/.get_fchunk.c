// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BC0
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BC0 jmp     cs:off_955C8
//
// Resolved target: get_fchunk
// Target address:  0x96008
// GOT/IAT slot:    0x955C8
// Slot symbol:     off_955C8
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA60
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA60 jmp     cs:off_CA518
//
// Resolved target: get_fchunk
// Target address:  0xD0E60
// GOT/IAT slot:    0xCA518
// Slot symbol:     off_CA518
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67D0
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67D0 jmp     cs:off_2F3D0
//
// Resolved target: get_fchunk
// Target address:  0x2FA48
// GOT/IAT slot:    0x2F3D0
// Slot symbol:     off_2F3D0
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}


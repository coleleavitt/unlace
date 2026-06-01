// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7A0
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7A0 jmp     cs:off_353B8
//
// Resolved target: get_fchunk
// Target address:  0x35A10
// GOT/IAT slot:    0x353B8
// Slot symbol:     off_353B8
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}


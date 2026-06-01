// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_14180
//
// Resolved target: find_free_chunk
// Target address:  0x14770
// GOT/IAT slot:    0x14180
// Slot symbol:     off_14180
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}


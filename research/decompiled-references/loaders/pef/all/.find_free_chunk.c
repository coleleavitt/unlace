// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_80C8
//
// Resolved target: find_free_chunk
// Target address:  0x82B8
// GOT/IAT slot:    0x80C8
// Slot symbol:     off_80C8
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}


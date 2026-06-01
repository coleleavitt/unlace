// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43F0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43F0 jmp     cs:off_231E0
//
// Resolved target: find_free_chunk
// Target address:  0x23600
// GOT/IAT slot:    0x231E0
// Slot symbol:     off_231E0
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}


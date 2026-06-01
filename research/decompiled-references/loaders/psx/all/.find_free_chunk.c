// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_A0D0
//
// Resolved target: find_free_chunk
// Target address:  0xA380
// GOT/IAT slot:    0xA0D0
// Slot symbol:     off_A0D0
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}


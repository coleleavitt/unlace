// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_70C0
//
// Resolved target: find_free_chunk
// Target address:  0x7278
// GOT/IAT slot:    0x70C0
// Slot symbol:     off_70C0
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}


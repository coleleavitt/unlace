// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6400
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6400 jmp     cs:off_2D1E8
//
// Resolved target: get_item_end
// Target address:  0x2D6E8
// GOT/IAT slot:    0x2D1E8
// Slot symbol:     off_2D1E8
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


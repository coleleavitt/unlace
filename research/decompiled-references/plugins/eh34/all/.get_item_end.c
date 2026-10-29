// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63F0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63F0 jmp     cs:off_8D1E0
//
// Resolved target: get_item_end
// Target address:  0x8D778
// GOT/IAT slot:    0x8D1E0
// Slot symbol:     off_8D1E0
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


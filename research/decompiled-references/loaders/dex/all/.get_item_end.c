// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33F0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33F0 jmp     cs:off_281E0
//
// Resolved target: get_item_end
// Target address:  0x28690
// GOT/IAT slot:    0x281E0
// Slot symbol:     off_281E0
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


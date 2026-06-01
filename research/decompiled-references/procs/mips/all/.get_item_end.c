// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196F0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196F0 jmp     cs:off_75360
//
// Resolved target: get_item_end
// Target address:  0x75BB0
// GOT/IAT slot:    0x75360
// Slot symbol:     off_75360
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


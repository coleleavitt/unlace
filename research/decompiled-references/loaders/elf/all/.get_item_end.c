// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9570
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9570 jmp     cs:off_892A0
//
// Resolved target: get_item_end
// Target address:  0x8C5A8
// GOT/IAT slot:    0x892A0
// Slot symbol:     off_892A0
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


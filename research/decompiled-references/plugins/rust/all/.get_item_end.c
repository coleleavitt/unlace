// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_A0D0
//
// Resolved target: get_item_end
// Target address:  0xB3A0
// GOT/IAT slot:    0xA0D0
// Slot symbol:     off_A0D0
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


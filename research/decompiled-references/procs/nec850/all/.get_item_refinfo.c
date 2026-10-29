// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98B0
// Name:            .get_item_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98B0 jmp     cs:off_2E440
//
// Resolved target: get_item_refinfo
// Target address:  0x2EAC8
// GOT/IAT slot:    0x2E440
// Slot symbol:     off_2E440
// Target type:     <no type info>
// ============================================================

void .get_item_refinfo(/* see target signature */)
{
    // Tail-call to get_item_refinfo via GOT/IAT indirection
    return get_item_refinfo(/* forwarded args */);
}


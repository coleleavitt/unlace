// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6380
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6380 jmp     cs:off_2D1A8
//
// Resolved target: del_items
// Target address:  0x2D6A8
// GOT/IAT slot:    0x2D1A8
// Slot symbol:     off_2D1A8
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


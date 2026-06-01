// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_28180
//
// Resolved target: del_items
// Target address:  0x28630
// GOT/IAT slot:    0x28180
// Slot symbol:     off_28180
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


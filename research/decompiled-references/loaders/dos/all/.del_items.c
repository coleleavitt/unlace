// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_B150
//
// Resolved target: del_items
// Target address:  0xB5E8
// GOT/IAT slot:    0xB150
// Slot symbol:     off_B150
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


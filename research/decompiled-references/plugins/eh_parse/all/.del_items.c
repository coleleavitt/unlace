// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6430
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6430 jmp     cs:off_2F200
//
// Resolved target: del_items
// Target address:  0x2F870
// GOT/IAT slot:    0x2F200
// Slot symbol:     off_2F200
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


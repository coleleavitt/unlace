// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9440
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9440 jmp     cs:off_2E208
//
// Resolved target: del_items
// Target address:  0x2E878
// GOT/IAT slot:    0x2E208
// Slot symbol:     off_2E208
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


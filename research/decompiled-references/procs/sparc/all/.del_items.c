// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7380
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7380 jmp     cs:off_191A8
//
// Resolved target: del_items
// Target address:  0x196D8
// GOT/IAT slot:    0x191A8
// Slot symbol:     off_191A8
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


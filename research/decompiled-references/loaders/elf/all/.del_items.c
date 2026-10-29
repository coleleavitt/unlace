// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94D0
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94D0 jmp     cs:off_89250
//
// Resolved target: del_items
// Target address:  0x8C558
// GOT/IAT slot:    0x89250
// Slot symbol:     off_89250
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


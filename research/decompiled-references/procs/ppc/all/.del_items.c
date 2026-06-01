// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20700
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20700 jmp     cs:off_95368
//
// Resolved target: del_items
// Target address:  0x95DA0
// GOT/IAT slot:    0x95368
// Slot symbol:     off_95368
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


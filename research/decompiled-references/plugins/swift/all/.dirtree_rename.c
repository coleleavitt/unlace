// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42E0
// Name:            .dirtree_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42E0 jmp     cs:off_28158
//
// Resolved target: dirtree_rename
// Target address:  0x29AF0
// GOT/IAT slot:    0x28158
// Slot symbol:     off_28158
// Target type:     <no type info>
// ============================================================

void .dirtree_rename(/* see target signature */)
{
    // Tail-call to dirtree_rename via GOT/IAT indirection
    return dirtree_rename(/* forwarded args */);
}


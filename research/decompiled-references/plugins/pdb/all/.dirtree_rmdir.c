// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9B0
// Name:            .dirtree_rmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9B0 jmp     cs:off_B34C0
//
// Resolved target: dirtree_rmdir
// Target address:  0xB3C78
// GOT/IAT slot:    0xB34C0
// Slot symbol:     off_B34C0
// Target type:     <no type info>
// ============================================================

void .dirtree_rmdir(/* see target signature */)
{
    // Tail-call to dirtree_rmdir via GOT/IAT indirection
    return dirtree_rmdir(/* forwarded args */);
}


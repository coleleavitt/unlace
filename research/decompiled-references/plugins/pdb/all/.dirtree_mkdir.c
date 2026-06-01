// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D920
// Name:            .dirtree_mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D920 jmp     cs:off_B3478
//
// Resolved target: dirtree_mkdir
// Target address:  0xB3C20
// GOT/IAT slot:    0xB3478
// Slot symbol:     off_B3478
// Target type:     <no type info>
// ============================================================

void .dirtree_mkdir(/* see target signature */)
{
    // Tail-call to dirtree_mkdir via GOT/IAT indirection
    return dirtree_mkdir(/* forwarded args */);
}


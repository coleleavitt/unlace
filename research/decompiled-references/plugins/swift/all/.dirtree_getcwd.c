// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4660
// Name:            .dirtree_getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4660 jmp     cs:off_28318
//
// Resolved target: dirtree_getcwd
// Target address:  0x29CC0
// GOT/IAT slot:    0x28318
// Slot symbol:     off_28318
// Target type:     <no type info>
// ============================================================

void .dirtree_getcwd(/* see target signature */)
{
    // Tail-call to dirtree_getcwd via GOT/IAT indirection
    return dirtree_getcwd(/* forwarded args */);
}


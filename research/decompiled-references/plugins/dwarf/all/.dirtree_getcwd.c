// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA90
// Name:            .dirtree_getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA90 jmp     cs:off_CA530
//
// Resolved target: dirtree_getcwd
// Target address:  0xD0E80
// GOT/IAT slot:    0xCA530
// Slot symbol:     off_CA530
// Target type:     <no type info>
// ============================================================

void .dirtree_getcwd(/* see target signature */)
{
    // Tail-call to dirtree_getcwd via GOT/IAT indirection
    return dirtree_getcwd(/* forwarded args */);
}


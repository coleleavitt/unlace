// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x161E0
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x161E0 jmp     cs:off_4F0D8
//
// Resolved target: netnode_rename
// Target address:  0x4FF58
// GOT/IAT slot:    0x4F0D8
// Slot symbol:     off_4F0D8
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}


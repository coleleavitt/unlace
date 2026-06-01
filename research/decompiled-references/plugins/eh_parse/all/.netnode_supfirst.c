// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6480
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6480 jmp     cs:off_2F228
//
// Resolved target: netnode_supfirst
// Target address:  0x2F898
// GOT/IAT slot:    0x2F228
// Slot symbol:     off_2F228
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


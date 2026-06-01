// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94B0
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94B0 jmp     cs:off_89240
//
// Resolved target: netnode_set
// Target address:  0x8C548
// GOT/IAT slot:    0x89240
// Slot symbol:     off_89240
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


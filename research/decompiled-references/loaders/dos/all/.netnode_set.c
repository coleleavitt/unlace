// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_B140
//
// Resolved target: netnode_set
// Target address:  0xB5D8
// GOT/IAT slot:    0xB140
// Slot symbol:     off_B140
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


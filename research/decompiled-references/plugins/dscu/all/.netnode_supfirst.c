// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4230
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4230 jmp     cs:off_1F100
//
// Resolved target: netnode_supfirst
// Target address:  0x1F3B0
// GOT/IAT slot:    0x1F100
// Slot symbol:     off_1F100
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17300
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17300 jmp     cs:off_4F968
//
// Resolved target: netnode_supfirst
// Target address:  0x50E80
// GOT/IAT slot:    0x4F968
// Slot symbol:     off_4F968
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


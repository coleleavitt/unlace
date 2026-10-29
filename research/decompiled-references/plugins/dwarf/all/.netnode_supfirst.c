// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5E0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5E0 jmp     cs:off_CA2D8
//
// Resolved target: netnode_supfirst
// Target address:  0xD0C10
// GOT/IAT slot:    0xCA2D8
// Slot symbol:     off_CA2D8
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


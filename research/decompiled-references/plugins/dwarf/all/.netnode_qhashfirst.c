// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD20
// Name:            .netnode_qhashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD20 jmp     cs:off_CA678
//
// Resolved target: netnode_qhashfirst
// Target address:  0xD0FD8
// GOT/IAT slot:    0xCA678
// Slot symbol:     off_CA678
// Target type:     <no type info>
// ============================================================

void .netnode_qhashfirst(/* see target signature */)
{
    // Tail-call to netnode_qhashfirst via GOT/IAT indirection
    return netnode_qhashfirst(/* forwarded args */);
}


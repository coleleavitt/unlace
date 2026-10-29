// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20740
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20740 jmp     cs:off_95388
//
// Resolved target: netnode_supfirst
// Target address:  0x95DC0
// GOT/IAT slot:    0x95388
// Slot symbol:     off_95388
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


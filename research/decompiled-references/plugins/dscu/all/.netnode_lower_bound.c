// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4310
// Name:            .netnode_lower_bound
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4310 jmp     cs:off_1F170
//
// Resolved target: netnode_lower_bound
// Target address:  0x1F420
// GOT/IAT slot:    0x1F170
// Slot symbol:     off_1F170
// Target type:     <no type info>
// ============================================================

void .netnode_lower_bound(/* see target signature */)
{
    // Tail-call to netnode_lower_bound via GOT/IAT indirection
    return netnode_lower_bound(/* forwarded args */);
}


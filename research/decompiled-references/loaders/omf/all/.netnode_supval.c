// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_14108
//
// Resolved target: netnode_supval
// Target address:  0x146F0
// GOT/IAT slot:    0x14108
// Slot symbol:     off_14108
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


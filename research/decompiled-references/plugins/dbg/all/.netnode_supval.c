// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_130F0
//
// Resolved target: netnode_supval
// Target address:  0x13468
// GOT/IAT slot:    0x130F0
// Slot symbol:     off_130F0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_A0B0
//
// Resolved target: netnode_supval
// Target address:  0xA2E0
// GOT/IAT slot:    0xA0B0
// Slot symbol:     off_A0B0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


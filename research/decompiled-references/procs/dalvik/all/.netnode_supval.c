// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51C0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51C0 jmp     cs:off_1A0C8
//
// Resolved target: netnode_supval
// Target address:  0x1A450
// GOT/IAT slot:    0x1A0C8
// Slot symbol:     off_1A0C8
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


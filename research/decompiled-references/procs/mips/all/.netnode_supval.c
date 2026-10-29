// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193D0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193D0 jmp     cs:off_751D0
//
// Resolved target: netnode_supval
// Target address:  0x75A20
// GOT/IAT slot:    0x751D0
// Slot symbol:     off_751D0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


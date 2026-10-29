// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6260
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6260 jmp     cs:off_2D118
//
// Resolved target: netnode_supval
// Target address:  0x2D618
// GOT/IAT slot:    0x2D118
// Slot symbol:     off_2D118
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


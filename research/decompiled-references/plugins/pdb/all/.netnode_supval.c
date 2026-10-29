// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D340
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D340 jmp     cs:off_B3188
//
// Resolved target: netnode_supval
// Target address:  0xB3920
// GOT/IAT slot:    0xB3188
// Slot symbol:     off_B3188
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


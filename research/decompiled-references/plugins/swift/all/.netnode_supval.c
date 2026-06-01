// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42C0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42C0 jmp     cs:off_28148
//
// Resolved target: netnode_supval
// Target address:  0x29AE0
// GOT/IAT slot:    0x28148
// Slot symbol:     off_28148
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


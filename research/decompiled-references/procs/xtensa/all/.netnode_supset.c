// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73B0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73B0 jmp     cs:off_1D1C0
//
// Resolved target: netnode_supset
// Target address:  0x1D508
// GOT/IAT slot:    0x1D1C0
// Slot symbol:     off_1D1C0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}


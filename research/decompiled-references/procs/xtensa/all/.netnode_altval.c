// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7190
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7190 jmp     cs:off_1D0B0
//
// Resolved target: netnode_altval
// Target address:  0x1D3E0
// GOT/IAT slot:    0x1D0B0
// Slot symbol:     off_1D0B0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}


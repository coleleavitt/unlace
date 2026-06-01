// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72F0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72F0 jmp     cs:off_1D160
//
// Resolved target: netnode_check
// Target address:  0x1D498
// GOT/IAT slot:    0x1D160
// Slot symbol:     off_1D160
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}


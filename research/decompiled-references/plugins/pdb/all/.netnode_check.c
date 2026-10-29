// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8C0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8C0 jmp     cs:off_B3448
//
// Resolved target: netnode_check
// Target address:  0xB3BF0
// GOT/IAT slot:    0xB3448
// Slot symbol:     off_B3448
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}


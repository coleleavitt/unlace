// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA790
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA790 jmp     cs:off_353B0
//
// Resolved target: split_sreg_range
// Target address:  0x35A08
// GOT/IAT slot:    0x353B0
// Slot symbol:     off_353B0
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}


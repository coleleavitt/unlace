// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9710
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9710 jmp     cs:off_2E370
//
// Resolved target: split_sreg_range
// Target address:  0x2E9E8
// GOT/IAT slot:    0x2E370
// Slot symbol:     off_2E370
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}


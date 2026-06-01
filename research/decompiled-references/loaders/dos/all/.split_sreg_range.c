// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24A0
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24A0 jmp     cs:off_B238
//
// Resolved target: split_sreg_range
// Target address:  0xB6D8
// GOT/IAT slot:    0xB238
// Slot symbol:     off_B238
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}


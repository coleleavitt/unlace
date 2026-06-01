// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5680
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5680 jmp     cs:off_15328
//
// Resolved target: num_flag
// Target address:  0x163D0
// GOT/IAT slot:    0x15328
// Slot symbol:     off_15328
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


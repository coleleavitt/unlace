// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6950
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6950 jmp     cs:off_2F490
//
// Resolved target: num_flag
// Target address:  0x2FB20
// GOT/IAT slot:    0x2F490
// Slot symbol:     off_2F490
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


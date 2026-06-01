// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C50
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C50 jmp     cs:off_75610
//
// Resolved target: num_flag
// Target address:  0x75E78
// GOT/IAT slot:    0x75610
// Slot symbol:     off_75610
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


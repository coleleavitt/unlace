// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E00
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E00 jmp     cs:off_956E8
//
// Resolved target: num_flag
// Target address:  0x96138
// GOT/IAT slot:    0x956E8
// Slot symbol:     off_956E8
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


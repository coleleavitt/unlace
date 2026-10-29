// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_40C8
//
// Resolved target: num_flag
// Target address:  0x41E8
// GOT/IAT slot:    0x40C8
// Slot symbol:     off_40C8
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


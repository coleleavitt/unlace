// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7700
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7700 jmp     cs:off_19368
//
// Resolved target: num_flag
// Target address:  0x198B0
// GOT/IAT slot:    0x19368
// Slot symbol:     off_19368
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9900
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9900 jmp     cs:off_2E468
//
// Resolved target: num_flag
// Target address:  0x2EAF0
// GOT/IAT slot:    0x2E468
// Slot symbol:     off_2E468
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}


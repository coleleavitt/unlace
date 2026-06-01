// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2450
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2450 jmp     cs:off_B210
//
// Resolved target: auto_mark_range
// Target address:  0xB4D0
// GOT/IAT slot:    0xB210
// Slot symbol:     off_B210
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


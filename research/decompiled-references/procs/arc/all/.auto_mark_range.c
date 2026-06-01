// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8900
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8900 jmp     cs:off_2A468
//
// Resolved target: auto_mark_range
// Target address:  0x2BE90
// GOT/IAT slot:    0x2A468
// Slot symbol:     off_2A468
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5730
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5730 jmp     cs:off_15380
//
// Resolved target: auto_mark_range
// Target address:  0x16428
// GOT/IAT slot:    0x15380
// Slot symbol:     off_15380
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


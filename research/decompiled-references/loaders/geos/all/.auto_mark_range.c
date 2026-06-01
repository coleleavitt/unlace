// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2400
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2400 jmp     cs:off_81E8
//
// Resolved target: auto_mark_range
// Target address:  0x8460
// GOT/IAT slot:    0x81E8
// Slot symbol:     off_81E8
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


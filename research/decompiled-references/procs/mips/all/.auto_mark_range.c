// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D40
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D40 jmp     cs:off_75688
//
// Resolved target: auto_mark_range
// Target address:  0x75EF0
// GOT/IAT slot:    0x75688
// Slot symbol:     off_75688
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99B0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99B0 jmp     cs:off_2E4C0
//
// Resolved target: auto_mark_range
// Target address:  0x2EB48
// GOT/IAT slot:    0x2E4C0
// Slot symbol:     off_2E4C0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


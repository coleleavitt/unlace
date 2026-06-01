// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8810
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8810 jmp     cs:off_2A3F0
//
// Resolved target: auto_mark_range
// Target address:  0x2A978
// GOT/IAT slot:    0x2A3F0
// Slot symbol:     off_2A3F0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_8180
//
// Resolved target: auto_mark_range
// Target address:  0x8370
// GOT/IAT slot:    0x8180
// Slot symbol:     off_8180
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


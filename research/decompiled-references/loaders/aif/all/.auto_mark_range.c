// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: auto_mark_range
// Target address:  0x5260
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


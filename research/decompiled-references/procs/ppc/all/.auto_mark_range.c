// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F00
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F00 jmp     cs:off_95768
//
// Resolved target: auto_mark_range
// Target address:  0x961B8
// GOT/IAT slot:    0x95768
// Slot symbol:     off_95768
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


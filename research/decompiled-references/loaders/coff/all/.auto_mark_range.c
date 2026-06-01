// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4760
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4760 jmp     cs:off_23398
//
// Resolved target: auto_mark_range
// Target address:  0x237D8
// GOT/IAT slot:    0x23398
// Slot symbol:     off_23398
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}


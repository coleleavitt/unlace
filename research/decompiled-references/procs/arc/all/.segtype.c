// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x88E0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x88E0 jmp     cs:off_2A458
//
// Resolved target: segtype
// Target address:  0x2BE80
// GOT/IAT slot:    0x2A458
// Slot symbol:     off_2A458
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}


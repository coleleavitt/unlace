// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA350
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA350 jmp     cs:off_CA190
//
// Resolved target: compare_tinfo
// Target address:  0xD0AC0
// GOT/IAT slot:    0xCA190
// Slot symbol:     off_CA190
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}


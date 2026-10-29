// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA280
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA280 jmp     cs:off_35128
//
// Resolved target: compare_tinfo
// Target address:  0x35778
// GOT/IAT slot:    0x35128
// Slot symbol:     off_35128
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}


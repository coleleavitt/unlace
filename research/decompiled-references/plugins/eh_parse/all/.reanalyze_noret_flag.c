// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6990
// Name:            .reanalyze_noret_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6990 jmp     cs:off_2F4B0
//
// Resolved target: reanalyze_noret_flag
// Target address:  0x2FB40
// GOT/IAT slot:    0x2F4B0
// Slot symbol:     off_2F4B0
// Target type:     <no type info>
// ============================================================

void .reanalyze_noret_flag(/* see target signature */)
{
    // Tail-call to reanalyze_noret_flag via GOT/IAT indirection
    return reanalyze_noret_flag(/* forwarded args */);
}


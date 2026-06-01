// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .reanalyze_callers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_13078
//
// Resolved target: reanalyze_callers
// Target address:  0x133F0
// GOT/IAT slot:    0x13078
// Slot symbol:     off_13078
// Target type:     <no type info>
// ============================================================

void .reanalyze_callers(/* see target signature */)
{
    // Tail-call to reanalyze_callers via GOT/IAT indirection
    return reanalyze_callers(/* forwarded args */);
}


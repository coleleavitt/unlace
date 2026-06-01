// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9310
// Name:            .apply_tinfo_to_stkarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9310 jmp     cs:off_2E170
//
// Resolved target: apply_tinfo_to_stkarg
// Target address:  0x2E7E0
// GOT/IAT slot:    0x2E170
// Slot symbol:     off_2E170
// Target type:     <no type info>
// ============================================================

void .apply_tinfo_to_stkarg(/* see target signature */)
{
    // Tail-call to apply_tinfo_to_stkarg via GOT/IAT indirection
    return apply_tinfo_to_stkarg(/* forwarded args */);
}


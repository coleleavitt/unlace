// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19430
// Name:            .apply_tinfo_to_stkarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19430 jmp     cs:off_75200
//
// Resolved target: apply_tinfo_to_stkarg
// Target address:  0x75A50
// GOT/IAT slot:    0x75200
// Slot symbol:     off_75200
// Target type:     <no type info>
// ============================================================

void .apply_tinfo_to_stkarg(/* see target signature */)
{
    // Tail-call to apply_tinfo_to_stkarg via GOT/IAT indirection
    return apply_tinfo_to_stkarg(/* forwarded args */);
}


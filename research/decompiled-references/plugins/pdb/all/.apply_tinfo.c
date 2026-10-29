// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D200
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D200 jmp     cs:off_B30E8
//
// Resolved target: apply_tinfo
// Target address:  0xB3870
// GOT/IAT slot:    0xB30E8
// Slot symbol:     off_B30E8
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}


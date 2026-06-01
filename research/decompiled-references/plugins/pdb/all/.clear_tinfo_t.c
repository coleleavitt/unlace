// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D310
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D310 jmp     cs:off_B3170
//
// Resolved target: clear_tinfo_t
// Target address:  0xB3908
// GOT/IAT slot:    0xB3170
// Slot symbol:     off_B3170
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}


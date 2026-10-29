// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92C0
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92C0 jmp     cs:off_2E148
//
// Resolved target: clear_tinfo_t
// Target address:  0x2E7B8
// GOT/IAT slot:    0x2E148
// Slot symbol:     off_2E148
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}


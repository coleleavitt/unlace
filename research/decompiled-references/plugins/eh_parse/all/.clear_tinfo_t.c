// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62A0
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62A0 jmp     cs:off_2F138
//
// Resolved target: clear_tinfo_t
// Target address:  0x2F7A8
// GOT/IAT slot:    0x2F138
// Slot symbol:     off_2F138
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}


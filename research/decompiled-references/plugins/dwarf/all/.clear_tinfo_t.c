// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3A0
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3A0 jmp     cs:off_CA1B8
//
// Resolved target: clear_tinfo_t
// Target address:  0xD0AE8
// GOT/IAT slot:    0xCA1B8
// Slot symbol:     off_CA1B8
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}


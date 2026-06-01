// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20430
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20430 jmp     cs:off_95200
//
// Resolved target: clear_tinfo_t
// Target address:  0x95C38
// GOT/IAT slot:    0x95200
// Slot symbol:     off_95200
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}


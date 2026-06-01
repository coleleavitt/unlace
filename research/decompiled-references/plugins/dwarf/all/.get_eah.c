// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8E0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8E0 jmp     cs:off_CA458
//
// Resolved target: get_eah
// Target address:  0xD0D98
// GOT/IAT slot:    0xCA458
// Slot symbol:     off_CA458
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


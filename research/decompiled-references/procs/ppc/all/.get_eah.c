// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20AA0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20AA0 jmp     cs:off_95538
//
// Resolved target: get_eah
// Target address:  0x95F70
// GOT/IAT slot:    0x95538
// Slot symbol:     off_95538
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


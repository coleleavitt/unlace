// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3450
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3450 jmp     cs:off_13210
//
// Resolved target: get_eah
// Target address:  0x13590
// GOT/IAT slot:    0x13210
// Slot symbol:     off_13210
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


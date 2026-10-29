// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4770
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4770 jmp     cs:off_4E3A0
//
// Resolved target: get_eah
// Target address:  0x4F9B8
// GOT/IAT slot:    0x4E3A0
// Slot symbol:     off_4E3A0
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


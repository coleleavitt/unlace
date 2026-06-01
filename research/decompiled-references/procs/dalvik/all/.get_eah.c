// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53A0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53A0 jmp     cs:off_1A1B8
//
// Resolved target: get_eah
// Target address:  0x1A540
// GOT/IAT slot:    0x1A1B8
// Slot symbol:     off_1A1B8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


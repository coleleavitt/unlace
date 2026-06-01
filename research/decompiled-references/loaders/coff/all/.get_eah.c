// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4580
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4580 jmp     cs:off_232A8
//
// Resolved target: get_eah
// Target address:  0x236C8
// GOT/IAT slot:    0x232A8
// Slot symbol:     off_232A8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66D0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66D0 jmp     cs:off_2F350
//
// Resolved target: get_eah
// Target address:  0x2F9C0
// GOT/IAT slot:    0x2F350
// Slot symbol:     off_2F350
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


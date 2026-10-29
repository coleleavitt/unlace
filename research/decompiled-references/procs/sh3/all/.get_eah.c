// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54D0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54D0 jmp     cs:off_15250
//
// Resolved target: get_eah
// Target address:  0x162E0
// GOT/IAT slot:    0x15250
// Slot symbol:     off_15250
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


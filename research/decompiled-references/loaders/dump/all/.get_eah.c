// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_5060
//
// Resolved target: get_eah
// Target address:  0x53A0
// GOT/IAT slot:    0x5060
// Slot symbol:     off_5060
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


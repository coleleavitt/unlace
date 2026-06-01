// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72A0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72A0 jmp     cs:off_26138
//
// Resolved target: get_eah
// Target address:  0x263F0
// GOT/IAT slot:    0x26138
// Slot symbol:     off_26138
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


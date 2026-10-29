// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_7088
//
// Resolved target: get_eah
// Target address:  0x71B8
// GOT/IAT slot:    0x7088
// Slot symbol:     off_7088
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


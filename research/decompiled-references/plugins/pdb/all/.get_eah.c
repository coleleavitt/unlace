// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D820
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D820 jmp     cs:off_B33F8
//
// Resolved target: get_eah
// Target address:  0xB3B98
// GOT/IAT slot:    0xB33F8
// Slot symbol:     off_B33F8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


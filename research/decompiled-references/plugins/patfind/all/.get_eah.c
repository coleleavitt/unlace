// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_130E8
//
// Resolved target: get_eah
// Target address:  0x13380
// GOT/IAT slot:    0x130E8
// Slot symbol:     off_130E8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


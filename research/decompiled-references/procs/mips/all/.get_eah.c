// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19920
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19920 jmp     cs:off_75478
//
// Resolved target: get_eah
// Target address:  0x75CC8
// GOT/IAT slot:    0x75478
// Slot symbol:     off_75478
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


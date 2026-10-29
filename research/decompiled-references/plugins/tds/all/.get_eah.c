// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_A128
//
// Resolved target: get_eah
// Target address:  0xA358
// GOT/IAT slot:    0xA128
// Slot symbol:     off_A128
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


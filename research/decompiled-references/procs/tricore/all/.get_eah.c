// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65C0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65C0 jmp     cs:off_242C8
//
// Resolved target: get_eah
// Target address:  0x26098
// GOT/IAT slot:    0x242C8
// Slot symbol:     off_242C8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


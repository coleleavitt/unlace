// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16830
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16830 jmp     cs:off_4F400
//
// Resolved target: get_eah
// Target address:  0x504B8
// GOT/IAT slot:    0x4F400
// Slot symbol:     off_4F400
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


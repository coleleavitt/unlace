// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4570
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4570 jmp     cs:off_282A0
//
// Resolved target: get_eah
// Target address:  0x29C38
// GOT/IAT slot:    0x282A0
// Slot symbol:     off_282A0
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


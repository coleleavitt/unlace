// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64A0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64A0 jmp     cs:off_1D238
//
// Resolved target: get_eah
// Target address:  0x1D728
// GOT/IAT slot:    0x1D238
// Slot symbol:     off_1D238
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


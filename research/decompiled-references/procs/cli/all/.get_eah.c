// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_1A130
//
// Resolved target: get_eah
// Target address:  0x1A3E8
// GOT/IAT slot:    0x1A130
// Slot symbol:     off_1A130
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}


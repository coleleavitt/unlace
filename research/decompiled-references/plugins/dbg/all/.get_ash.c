// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3560
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3560 jmp     cs:off_13298
//
// Resolved target: get_ash
// Target address:  0x13630
// GOT/IAT slot:    0x13298
// Slot symbol:     off_13298
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}


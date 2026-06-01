// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D720
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D720 jmp     cs:off_B3378
//
// Resolved target: get_aflags
// Target address:  0xB3B18
// GOT/IAT slot:    0xB3378
// Slot symbol:     off_B3378
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}


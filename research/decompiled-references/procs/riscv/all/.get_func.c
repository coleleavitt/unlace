// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA490
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA490 jmp     cs:off_35230
//
// Resolved target: get_func
// Target address:  0x35880
// GOT/IAT slot:    0x35230
// Slot symbol:     off_35230
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


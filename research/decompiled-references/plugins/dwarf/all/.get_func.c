// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA560
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA560 jmp     cs:off_CA298
//
// Resolved target: get_func
// Target address:  0xD0BD0
// GOT/IAT slot:    0xCA298
// Slot symbol:     off_CA298
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


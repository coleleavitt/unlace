// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6370
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6370 jmp     cs:off_8D1A0
//
// Resolved target: get_func
// Target address:  0x8D738
// GOT/IAT slot:    0x8D1A0
// Slot symbol:     off_8D1A0
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_A0D0
//
// Resolved target: get_func
// Target address:  0xA300
// GOT/IAT slot:    0xA0D0
// Slot symbol:     off_A0D0
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6360
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6360 jmp     cs:off_1D198
//
// Resolved target: get_func
// Target address:  0x1D688
// GOT/IAT slot:    0x1D198
// Slot symbol:     off_1D198
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


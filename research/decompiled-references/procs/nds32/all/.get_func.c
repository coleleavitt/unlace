// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8360
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8360 jmp     cs:off_2A198
//
// Resolved target: get_func
// Target address:  0x2A708
// GOT/IAT slot:    0x2A198
// Slot symbol:     off_2A198
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


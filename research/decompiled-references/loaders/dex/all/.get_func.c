// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_28178
//
// Resolved target: get_func
// Target address:  0x28628
// GOT/IAT slot:    0x28178
// Slot symbol:     off_28178
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


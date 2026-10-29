// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9420
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9420 jmp     cs:off_2E1F8
//
// Resolved target: get_func
// Target address:  0x2E868
// GOT/IAT slot:    0x2E1F8
// Slot symbol:     off_2E1F8
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


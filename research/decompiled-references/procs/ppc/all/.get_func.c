// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x206D0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x206D0 jmp     cs:off_95350
//
// Resolved target: get_func
// Target address:  0x95D88
// GOT/IAT slot:    0x95350
// Slot symbol:     off_95350
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


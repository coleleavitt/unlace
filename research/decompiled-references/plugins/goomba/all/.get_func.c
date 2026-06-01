// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44A0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44A0 jmp     cs:off_4E238
//
// Resolved target: get_func
// Target address:  0x4F848
// GOT/IAT slot:    0x4E238
// Slot symbol:     off_4E238
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


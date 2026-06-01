// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32C0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32C0 jmp     cs:off_20148
//
// Resolved target: get_func
// Target address:  0x21A58
// GOT/IAT slot:    0x20148
// Slot symbol:     off_20148
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


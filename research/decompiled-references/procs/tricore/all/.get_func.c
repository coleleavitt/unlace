// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63A0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63A0 jmp     cs:off_241B8
//
// Resolved target: get_func
// Target address:  0x25F88
// GOT/IAT slot:    0x241B8
// Slot symbol:     off_241B8
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}


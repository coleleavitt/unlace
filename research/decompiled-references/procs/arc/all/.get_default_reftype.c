// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8530
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8530 jmp     cs:off_2A280
//
// Resolved target: get_default_reftype
// Target address:  0x2BC90
// GOT/IAT slot:    0x2A280
// Slot symbol:     off_2A280
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}


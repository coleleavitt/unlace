// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98E0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98E0 jmp     cs:off_89458
//
// Resolved target: get_ph
// Target address:  0x8C780
// GOT/IAT slot:    0x89458
// Slot symbol:     off_89458
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8E0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8E0 jmp     cs:off_35458
//
// Resolved target: get_ph
// Target address:  0x35AC0
// GOT/IAT slot:    0x35458
// Slot symbol:     off_35458
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


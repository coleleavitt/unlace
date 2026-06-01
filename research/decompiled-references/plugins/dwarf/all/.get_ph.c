// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB70
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB70 jmp     cs:off_CA5A0
//
// Resolved target: get_ph
// Target address:  0xD0EF8
// GOT/IAT slot:    0xCA5A0
// Slot symbol:     off_CA5A0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


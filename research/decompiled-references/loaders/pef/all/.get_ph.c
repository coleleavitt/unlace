// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_8140
//
// Resolved target: get_ph
// Target address:  0x8348
// GOT/IAT slot:    0x8140
// Slot symbol:     off_8140
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


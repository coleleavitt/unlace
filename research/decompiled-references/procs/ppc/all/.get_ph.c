// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D50
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D50 jmp     cs:off_95690
//
// Resolved target: get_ph
// Target address:  0x960E0
// GOT/IAT slot:    0x95690
// Slot symbol:     off_95690
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


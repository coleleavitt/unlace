// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: get_ph
// Target address:  0x52E0
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


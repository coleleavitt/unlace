// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_70A0
//
// Resolved target: get_ph
// Target address:  0x71E8
// GOT/IAT slot:    0x70A0
// Slot symbol:     off_70A0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


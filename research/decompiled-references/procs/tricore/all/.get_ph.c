// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6770
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6770 jmp     cs:off_243A0
//
// Resolved target: get_ph
// Target address:  0x26188
// GOT/IAT slot:    0x243A0
// Slot symbol:     off_243A0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


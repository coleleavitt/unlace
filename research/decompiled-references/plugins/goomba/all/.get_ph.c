// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4910
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4910 jmp     cs:off_4E470
//
// Resolved target: get_ph
// Target address:  0x4FAA8
// GOT/IAT slot:    0x4E470
// Slot symbol:     off_4E470
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54A0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54A0 jmp     cs:off_1A238
//
// Resolved target: get_ph
// Target address:  0x1A5D8
// GOT/IAT slot:    0x1A238
// Slot symbol:     off_1A238
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


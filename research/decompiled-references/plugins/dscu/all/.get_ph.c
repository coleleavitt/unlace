// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43D0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43D0 jmp     cs:off_1F1D0
//
// Resolved target: get_ph
// Target address:  0x1F498
// GOT/IAT slot:    0x1F1D0
// Slot symbol:     off_1F1D0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


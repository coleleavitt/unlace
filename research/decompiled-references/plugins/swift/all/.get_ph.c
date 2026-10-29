// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4720
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4720 jmp     cs:off_28378
//
// Resolved target: get_ph
// Target address:  0x29D30
// GOT/IAT slot:    0x28378
// Slot symbol:     off_28378
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


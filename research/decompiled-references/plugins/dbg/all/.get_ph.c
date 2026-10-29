// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3540
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3540 jmp     cs:off_13288
//
// Resolved target: get_ph
// Target address:  0x13620
// GOT/IAT slot:    0x13288
// Slot symbol:     off_13288
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


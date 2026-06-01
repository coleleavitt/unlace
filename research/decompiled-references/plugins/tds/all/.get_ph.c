// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_A170
//
// Resolved target: get_ph
// Target address:  0xA3B8
// GOT/IAT slot:    0xA170
// Slot symbol:     off_A170
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


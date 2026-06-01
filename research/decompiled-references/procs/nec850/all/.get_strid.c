// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93A0
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93A0 jmp     cs:off_2E1B8
//
// Resolved target: get_strid
// Target address:  0x2E828
// GOT/IAT slot:    0x2E1B8
// Slot symbol:     off_2E1B8
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}


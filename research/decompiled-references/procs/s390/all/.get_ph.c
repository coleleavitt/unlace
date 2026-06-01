// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102D0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102D0 jmp     cs:off_2E150
//
// Resolved target: get_ph
// Target address:  0x36DE0
// GOT/IAT slot:    0x2E150
// Slot symbol:     off_2E150
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


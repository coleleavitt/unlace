// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4750
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4750 jmp     cs:off_23390
//
// Resolved target: get_byte
// Target address:  0x237D0
// GOT/IAT slot:    0x23390
// Slot symbol:     off_23390
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


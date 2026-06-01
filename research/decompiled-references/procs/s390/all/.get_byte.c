// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10330
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10330 jmp     cs:off_2E180
//
// Resolved target: get_byte
// Target address:  0x36E10
// GOT/IAT slot:    0x2E180
// Slot symbol:     off_2E180
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


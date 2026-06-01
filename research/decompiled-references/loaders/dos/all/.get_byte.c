// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2620
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2620 jmp     cs:off_B2F8
//
// Resolved target: get_byte
// Target address:  0xB7B0
// GOT/IAT slot:    0xB2F8
// Slot symbol:     off_B2F8
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


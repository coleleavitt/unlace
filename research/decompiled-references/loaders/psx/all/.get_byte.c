// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_A1C8
//
// Resolved target: get_byte
// Target address:  0xA490
// GOT/IAT slot:    0xA1C8
// Slot symbol:     off_A1C8
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


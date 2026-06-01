// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20EF0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20EF0 jmp     cs:off_95760
//
// Resolved target: get_byte
// Target address:  0x961B0
// GOT/IAT slot:    0x95760
// Slot symbol:     off_95760
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


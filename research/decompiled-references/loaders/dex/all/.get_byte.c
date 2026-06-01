// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3730
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3730 jmp     cs:off_28380
//
// Resolved target: get_byte
// Target address:  0x28848
// GOT/IAT slot:    0x28380
// Slot symbol:     off_28380
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


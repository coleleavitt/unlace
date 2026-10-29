// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2450
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2450 jmp     cs:off_B210
//
// Resolved target: get_byte
// Target address:  0xB4C0
// GOT/IAT slot:    0xB210
// Slot symbol:     off_B210
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


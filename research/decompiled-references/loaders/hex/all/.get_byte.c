// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1260
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1260 jmp     cs:off_5118
//
// Resolved target: get_byte
// Target address:  0x5300
// GOT/IAT slot:    0x5118
// Slot symbol:     off_5118
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


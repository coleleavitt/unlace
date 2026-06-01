// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x88F0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x88F0 jmp     cs:off_2A460
//
// Resolved target: get_byte
// Target address:  0x2BE88
// GOT/IAT slot:    0x2A460
// Slot symbol:     off_2A460
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


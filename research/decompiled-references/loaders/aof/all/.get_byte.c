// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_7160
//
// Resolved target: get_byte
// Target address:  0x7320
// GOT/IAT slot:    0x7160
// Slot symbol:     off_7160
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A40
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A40 jmp     cs:off_2F508
//
// Resolved target: get_byte
// Target address:  0x2FB98
// GOT/IAT slot:    0x2F508
// Slot symbol:     off_2F508
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


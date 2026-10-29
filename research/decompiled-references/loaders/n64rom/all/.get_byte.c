// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_50C0
//
// Resolved target: get_byte
// Target address:  0x51E8
// GOT/IAT slot:    0x50C0
// Slot symbol:     off_50C0
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


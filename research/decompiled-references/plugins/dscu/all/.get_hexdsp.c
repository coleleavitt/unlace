// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4240
// Name:            .get_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4240 jmp     cs:off_1F108
//
// Resolved target: get_hexdsp
// Target address:  0x1F3B8
// GOT/IAT slot:    0x1F108
// Slot symbol:     off_1F108
// Target type:     <no type info>
// ============================================================

void .get_hexdsp(/* see target signature */)
{
    // Tail-call to get_hexdsp via GOT/IAT indirection
    return get_hexdsp(/* forwarded args */);
}


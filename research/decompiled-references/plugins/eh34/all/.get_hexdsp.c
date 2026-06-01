// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63A0
// Name:            .get_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63A0 jmp     cs:off_8D1B8
//
// Resolved target: get_hexdsp
// Target address:  0x8D750
// GOT/IAT slot:    0x8D1B8
// Slot symbol:     off_8D1B8
// Target type:     <no type info>
// ============================================================

void .get_hexdsp(/* see target signature */)
{
    // Tail-call to get_hexdsp via GOT/IAT indirection
    return get_hexdsp(/* forwarded args */);
}


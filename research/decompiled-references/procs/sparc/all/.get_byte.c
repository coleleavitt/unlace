// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7790
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7790 jmp     cs:off_193B0
//
// Resolved target: get_byte
// Target address:  0x198F8
// GOT/IAT slot:    0x193B0
// Slot symbol:     off_193B0
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


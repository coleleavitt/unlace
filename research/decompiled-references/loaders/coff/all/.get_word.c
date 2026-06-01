// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4050
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4050 jmp     cs:off_23010
//
// Resolved target: get_word
// Target address:  0x23430
// GOT/IAT slot:    0x23010
// Slot symbol:     off_23010
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}


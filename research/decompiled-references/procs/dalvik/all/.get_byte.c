// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5560
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5560 jmp     cs:off_1A298
//
// Resolved target: get_byte
// Target address:  0x1A638
// GOT/IAT slot:    0x1A298
// Slot symbol:     off_1A298
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


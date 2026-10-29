// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6730
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6730 jmp     cs:off_8D380
//
// Resolved target: get_byte
// Target address:  0x8D940
// GOT/IAT slot:    0x8D380
// Slot symbol:     off_8D380
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


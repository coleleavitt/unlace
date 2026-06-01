// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D30
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D30 jmp     cs:off_75680
//
// Resolved target: get_byte
// Target address:  0x75EE8
// GOT/IAT slot:    0x75680
// Slot symbol:     off_75680
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}


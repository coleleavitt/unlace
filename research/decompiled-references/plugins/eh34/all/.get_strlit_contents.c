// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6090
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6090 jmp     cs:off_8D030
//
// Resolved target: get_strlit_contents
// Target address:  0x8D5B0
// GOT/IAT slot:    0x8D030
// Slot symbol:     off_8D030
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}


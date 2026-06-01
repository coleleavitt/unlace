// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8470
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8470 jmp     cs:off_2A220
//
// Resolved target: is_numop
// Target address:  0x2A790
// GOT/IAT slot:    0x2A220
// Slot symbol:     off_2A220
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}


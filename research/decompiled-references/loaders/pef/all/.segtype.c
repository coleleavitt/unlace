// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_8168
//
// Resolved target: segtype
// Target address:  0x8370
// GOT/IAT slot:    0x8168
// Slot symbol:     off_8168
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}


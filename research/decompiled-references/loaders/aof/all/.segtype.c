// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_7158
//
// Resolved target: segtype
// Target address:  0x7318
// GOT/IAT slot:    0x7158
// Slot symbol:     off_7158
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}


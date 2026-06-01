// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87F0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87F0 jmp     cs:off_2A3E0
//
// Resolved target: segtype
// Target address:  0x2A968
// GOT/IAT slot:    0x2A3E0
// Slot symbol:     off_2A3E0
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}


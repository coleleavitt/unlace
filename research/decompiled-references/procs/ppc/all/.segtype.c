// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20EE0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20EE0 jmp     cs:off_95758
//
// Resolved target: segtype
// Target address:  0x961A8
// GOT/IAT slot:    0x95758
// Slot symbol:     off_95758
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

